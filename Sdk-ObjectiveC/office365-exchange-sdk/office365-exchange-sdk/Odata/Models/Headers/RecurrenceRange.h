//  
//
//  Copyright (c) 2014 Microsoft Open Technologies, Inc.
//  All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Protocols.h"

@class RecurrenceRangeType;
@interface RecurrenceRange : NSObject	

@property RecurrenceRangeType *Type;
@property NSDate *StartDate;
@property NSDate *EndDate;
@property int NumberOfOccurrences;

@end