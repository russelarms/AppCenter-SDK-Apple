/*
 * Copyright (c) Microsoft Corporation. All rights reserved.
 */

#import "AVAChannel.h"
#import "AVALog.h"
#import "AVASender.h"
#import "AVAStorage.h"
#import "AVAConstants+Internal.h"
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Defines a channel which manages a queue of log items.
 */
@protocol AVALogManager <NSObject>

@required

/**
 * Initializes a new `AVALogManager` instance.
 *
 * @param channels A list with channels, each representing a specific priority.
 *
 * @return the telemetry context.
 */
- (instancetype)initWithChannels:(NSArray<AVAChannel> *)channels;

/**
 * Triggers processing of a new log item.
 *
 * param item The log item that should be enqueued.
 * param priority The priority for processing the log.
 */
- (void)processLog:(id<AVALog>)log withPriority:(AVAPriority)priority;

@end

NS_ASSUME_NONNULL_END
