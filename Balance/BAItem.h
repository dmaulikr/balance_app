//
//  BAItem.h
//  Balance
//
//  Created by Desmond Preston on 4/14/15.
//  Copyright (c) 2015 Desmond Preston. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BAItem : NSObject

@property (nonatomic) NSString *itemName;
@property (nonatomic) NSString *thisTimeNote;
@property (nonatomic) NSString *nextTimeNote;
@property (nonatomic) NSString *lastUpdate;

@end
