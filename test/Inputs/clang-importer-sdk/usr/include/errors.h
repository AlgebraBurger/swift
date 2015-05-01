/* -*- ObjC -*- */

@import Foundation;

@interface ErrorProne : NSObject
+ (BOOL) fail: (NSError**) error;
+ (BOOL) goAndReturnError: (NSError**) error;
+ (BOOL) tryAndReturnError: (NSError**) error;

+ (BOOL) consume: (id) object error: (NSError**) error;

- (instancetype) initWithOne: (nullable id) other error: (NSError**) error;
+ (instancetype) errorProneWithTwo: (nullable id) other error: (NSError**) error;

+ (NSArray*) collectionWithCount: (NSInteger) i error: (NSError**) error;
@end

@interface ReallyErrorProne : ErrorProne
@end
