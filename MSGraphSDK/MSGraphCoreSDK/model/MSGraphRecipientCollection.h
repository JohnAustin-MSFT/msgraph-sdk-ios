// Copyright (c) Microsoft Corporation.  All Rights Reserved.  Licensed under the MIT License.  See License in the project root for license information.



#import "MSCollection.h"
@class MSGraphRecipient;

@interface MSGraphRecipientCollection : MSCollection

+ (MSGraphRecipientCollection *) fromMSCollection:(MSCollection *)collection;
- (MSGraphRecipient*) objectAtIndex:(NSUInteger)index;
@property(readonly) NSUInteger count;

@end