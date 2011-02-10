//
//  CorePushAppDelegate.h
//  CorePush
//
//  Created by Maksim Horbul on 2/10/11.
//  Copyright 2011 SCEA. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CorePushViewController;

@interface CorePushAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    CorePushViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet CorePushViewController *viewController;

@end

