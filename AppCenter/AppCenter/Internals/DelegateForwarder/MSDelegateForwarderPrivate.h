#import "MSDelegateForwarder.h"

NS_ASSUME_NONNULL_BEGIN

@interface MSDelegateForwarder ()

/**
 * Keep track of original selectors to swizzle.
 */
@property(nonatomic, readonly) NSMutableSet<NSString *> *selectorsToSwizzle;

// TODO doc.
@property(nonatomic, nullable) NSMutableArray<dispatch_block_t> *traceBuffer;

/**
 * Only used by tests to reset the singleton instance.
 */
+ (void)resetSharedInstance;

@end

NS_ASSUME_NONNULL_END
