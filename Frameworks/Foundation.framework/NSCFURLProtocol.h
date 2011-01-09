/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSCFURLProtocol : NSURLProtocol 
{
    struct _CFURLProtocol { } *cfProt;
}

+ (BOOL)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;

- (void)dealloc;
- (void)finalize;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;
- (void)startLoading;
- (void)stopLoading;
- (void)_suspendLoading;
- (void)_resumeLoading;

@end