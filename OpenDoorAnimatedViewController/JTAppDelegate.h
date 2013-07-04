//
//  JTAppDelegate.h
//  OpenDoorAnimatedViewController
//
//  Created by Jerome TONNELIER on 04/07/13.
//  Copyright (c) 2013 Jérôme TONNELIER. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JTOpenDoorViewController.h"

@class JTOpenDoorViewController;

@interface JTAppDelegate : UIResponder <UIApplicationDelegate, OpenDoorViewControllerDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) JTOpenDoorViewController *viewController;

@end
