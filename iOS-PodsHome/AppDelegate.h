//
//  AppDelegate.h
//  iOS-PodsHome
//
//  Created by Zhu Jigao on 16/11/16.
//  Copyright © 2016年 sharesin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

