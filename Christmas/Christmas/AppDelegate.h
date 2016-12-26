//
//  AppDelegate.h
//  Christmas
//
//  Created by Hunter on 2016/12/26.
//  Copyright © 2016年 Hunter. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

