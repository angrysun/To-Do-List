//
//  ToDoItem.h
//  To Do List
//
//  Created by p on 3/25/15.
//  Copyright (c) 2015 Angry Sunshine. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
