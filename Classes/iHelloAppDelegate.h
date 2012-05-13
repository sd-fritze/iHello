//
//  iHelloAppDelegate.h
//  iHello
//
//  Created by Martin on 13.05.12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class iHelloViewController;

@interface iHelloAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    iHelloViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet iHelloViewController *viewController;

@end

