/*!
    RFKit
    UIColor extension

    Copyright (c) 2012 BB9z
    http://github.com/bb9z/RFKit

    The MIT License (MIT)
    http://www.opensource.org/licenses/mit-license.php
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface UIColor (RFKit)

- (UIColor *)initWithRGBHex:(NSInteger)hexValue alpha:(CGFloat)alpha;
+ (UIColor*)colorWithRGBHex:(NSInteger)hexValue alpha:(CGFloat)alpha;
+ (UIColor*)colorWithRGBHex:(NSInteger)hexValue;

+ (UIColor *)colorWithRGBString:(NSString *)nsstring;
+ (UIColor *)colorWithRGBString:(NSString *)nsstring alpha:(CGFloat)alpha;

+ (UIColor *)colorWithPatternImageName:(NSString *)resourceName;
@end