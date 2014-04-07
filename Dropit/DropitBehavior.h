//
//  DropitBehavior.h
//  Dropit
//
//  Created by Paola Castro on 4/5/14.
//  Copyright (c) 2014 thePaola. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DropitBehavior : UIDynamicBehavior

- (void)addItem:(id <UIDynamicItem>)item;
- (void)removeItem:(id <UIDynamicItem>)item;

@end
