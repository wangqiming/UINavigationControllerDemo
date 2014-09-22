//
//  AppDelegate.h
//  UINavigationControllerDemo
//
//  Created by wangqiming on 14-9-4.
//  Copyright (c) 2014年 zju. All rights reserved.
//

#import <UIKit/UIKit.h>
@class ViewController;
@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) ViewController *viewController;
@property (strong, nonatomic) UINavigationController *navController;

@end
