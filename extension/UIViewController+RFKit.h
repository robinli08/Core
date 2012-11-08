/*!
    RFKit
    UIViewController extension

    Copyright (c) 2012 BB9z
    http://github.com/bb9z/RFKit

    The MIT License (MIT)
    http://www.opensource.org/licenses/mit-license.php
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface UIViewController (RFKit)
- (void)setNavTitle:(NSString *)title back:(NSString *)backTitle;

- (void)addChildViewController:(UIViewController *)childController intoView:(UIView *)subview;

- (void)removeFromParentViewControllerAndView;

- (void)dismissKeyboard;
@end
