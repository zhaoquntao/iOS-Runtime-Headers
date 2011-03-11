/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUWebImagePool, NSMutableArray, NSLock, SUScriptObjectInvocationBatch, NSMutableSet, SUScriptNativeObject, SUScriptObject, NSString;

@interface SUScriptObject : NSObject  {
    NSMutableArray *_eventListeners;
    SUScriptObjectInvocationBatch *_invocationBatch;
    NSLock *_lock;
    SUScriptNativeObject *_nativeObject;
    SUScriptObject *_parentScriptObject;
    NSMutableSet *_scriptObjects;
    unsigned int _checkOutWhenHidden : 1;
    unsigned int _isVisible : 1;
    NSString *_className;
}

@property(retain) SUScriptNativeObject * nativeObject;
@property(readonly) struct OpaqueJSContext { }* copyJavaScriptContext;
@property(readonly) SUWebImagePool * imagePool;
@property SUScriptObject * parentScriptObject;
@property(readonly) BOOL sourceIsTrusted;
@property(readonly) NSMutableArray * scriptAttributeKeys;
@property(getter=_className,readonly) NSString * className;

+ (BOOL)isKeyExcludedFromWebScript:(const char *)arg1;
+ (BOOL)isSelectorExcludedFromWebScript:(SEL)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (BOOL)isVisible;
- (void)lock;
- (void)setVisible:(BOOL)arg1;
- (void)unlock;
- (id)parentViewController;
- (id)init;
- (void)dealloc;
- (void)checkOutScriptObjects:(id)arg1;
- (void)didPerformBatchedInvocations;
- (void)willPerformBatchedInvocations;
- (id)webThreadMainThreadBatchProxy;
- (id)invocationBatch:(BOOL)arg1;
- (BOOL)scriptObjectIsCheckedIn:(id)arg1;
- (id)nativeObject;
- (id)stringRepresentation;
- (void)removeListenerForEventWithName:(id)arg1 callback:(id)arg2 useCapture:(BOOL)arg3;
- (BOOL)equals:(id)arg1;
- (void)checkOutBatchTarget:(id)arg1;
- (BOOL)sourceIsTrusted;
- (void)checkInScriptObject:(id)arg1;
- (void)checkOutScriptObject:(id)arg1;
- (id)parentScriptObject;
- (void)setParentScriptObject:(id)arg1;
- (void)addListenerForEventWithName:(id)arg1 callback:(id)arg2 useCapture:(BOOL)arg3;
- (void)set_class:(id)arg1;
- (void)_checkOutAfterVisibilityChange;
- (id)_copyListenersForName:(id)arg1;
- (void)finalizeForWebScript;
- (void)setNativeObject:(id)arg1;
- (void)checkInScriptObjects:(id)arg1;
- (id)scriptAttributeKeys;
- (id)imagePool;
- (void)dispatchEvent:(id)arg1 forName:(id)arg2 synchronously:(BOOL)arg3;
- (id)copyObjectForScriptFromPoolWithClass:(Class)arg1;
- (void)tearDownUserInterface;
- (void)dispatchEvent:(id)arg1 forName:(id)arg2;
- (struct OpaqueJSContext { }*)copyJavaScriptContext;
- (id)_className;

@end