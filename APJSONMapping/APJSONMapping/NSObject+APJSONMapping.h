//
//  NSObject+APJSONMapping.h
//  APJSONMapping
//
//  Created by Alexander Perechnev on 17.12.15.
//  Copyright © 2015 Alexander Perechnev. All rights reserved.
//

#import <Foundation/Foundation.h>


/**
 @brief Category that extends NSObject functionality with JSON mapping.
 
 @discussion Use this category to make NSObject able to initialize from JSON
    and vice versa.
 */
@interface NSObject (APJSONMapping)

/**
 @brief Tells to an object how to map to and to parse from JSON.
 
 @discussion You must to override this methods in your subclass add relations 
    between object's properties and JSON fields.
 */
+ (NSMutableDictionary *)ap_objectMapping;

/**
 @brief Initializes object with dictionary following the mapping rules.
 
 @discussion Object will be initialized with dictionary following the rules, that you 
    declared in <code>objectMapping:</code> method.
 
 @param Dictionary that contains source values, that will be used to initialize object's 
    properties.
 
 @return An instance of object, initialized with passed dictionary.
 */
- (instancetype)initWithDictionary_ap:(NSDictionary *)dictionary;

/**
 @brief Initializes object with JSON string following the mapping rules.
 
 @discussion Object will be initialized with JSON string following the rules, that you
 declared in <code>objectMapping:</code> method.
 
 @param JSON that contains source values, that will be used to initialize object's
 properties.
 
 @return An instance of object, initialized with passed JSON string.
 */
- (instancetype)initWithJSONString_ap:(NSString *)jsonString;

/**
 @brief Maps object into dictionary
 
 @return Dictionary, that contains all object's properties, that pointed in <code>objectMapping:</code>
    method, as key-value pairs.
 */
- (NSDictionary *)ap_mapToDictionary;

/**
 @brief Maps object to JSON string
 
 @return String, that contains all object's properties, that pointed in <code>objectMapping:</code>
 method, as a fields in JSON object.
 */
- (NSString *)ap_mapToJSONString;

@end
