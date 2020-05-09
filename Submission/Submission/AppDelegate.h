//
//  AppDelegate.h
//  Submission
//
//  Created by Skyward Techno Solution Pvt Ltd on 09/05/20.
//  Copyright © 2020 test. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

