//
//  AYNavigationConfiguration.h
//  UIViewController+AYNavigationBar
//
//  Created by Pircate on 2018/3/28.
//  Copyright © 2018年 Pircate. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface AYNavigationConfiguration : NSObject

/**
 是否开启AYNavigation
 */
@property (nonatomic, assign) BOOL enabled;

/**
 @see UINavigationBar
 */
@property (nonatomic, strong) UIColor *barTintColor;

@property (nonatomic, strong) UIImage *backgroundImage;

@property (nonatomic, assign) UIBarPosition position;

@property (nonatomic, assign) UIBarMetrics metrics;

@property (nonatomic, strong) UIImage *shadowImage;

@property (nonatomic, copy) NSDictionary<NSAttributedStringKey, id> *titleTextAttributes;

@property (nonatomic, assign, getter = isTranslucent) BOOL translucent;

@property (nonatomic, assign) UIBarStyle barStyle;

/**
 额外高度
 */
@property (nonatomic, assign) CGFloat extraHeight;

@end
