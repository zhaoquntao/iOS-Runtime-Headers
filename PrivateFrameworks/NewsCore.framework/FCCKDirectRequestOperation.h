/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKDirectRequestOperation : FCOperation {
    NSDictionary * _additionalRequestHTTPHeaders;
    NSString * _containerName;
    id /* block */  _criticalNodeFailureTest;
    FCNetworkEvent * _networkEvent;
    int  _networkEventType;
    BOOL  _operationFailsOnRequestFailure;
    BOOL  _production;
    id /* block */  _requestCompletionHandler;
    int  _requestType;
    NSString * _requestUUID;
    NSArray * _requests;
    NSError * _resultError;
    NSMutableDictionary * _resultErrorsByRequestID;
    NSMutableArray * _resultResponses;
    double  _timeoutIntervalForRequest;
}

@property (nonatomic, copy) NSDictionary *additionalRequestHTTPHeaders;
@property (nonatomic, copy) NSString *containerName;
@property (nonatomic, copy) id /* block */ criticalNodeFailureTest;
@property (nonatomic, retain) FCNetworkEvent *networkEvent;
@property (nonatomic) int networkEventType;
@property (nonatomic) BOOL operationFailsOnRequestFailure;
@property (nonatomic) BOOL production;
@property (nonatomic, copy) id /* block */ requestCompletionHandler;
@property (nonatomic) int requestType;
@property (nonatomic, copy) NSString *requestUUID;
@property (nonatomic, copy) NSArray *requests;
@property (nonatomic, retain) NSError *resultError;
@property (nonatomic, retain) NSMutableDictionary *resultErrorsByRequestID;
@property (nonatomic, retain) NSMutableArray *resultResponses;
@property (nonatomic) double timeoutIntervalForRequest;

+ (id)URLSession;
+ (BOOL)_enableDebugLogLevel;

- (void).cxx_destruct;
- (id)_errorFromHTTPResponse:(id)arg1;
- (id)_errorFromOperationResultError:(id)arg1;
- (id)_mmeClientInfo;
- (void)_processResponseData:(id)arg1;
- (id)_requestBodyData;
- (id)_requestHeadersWithBaseURL:(id)arg1;
- (id)additionalRequestHTTPHeaders;
- (id)containerName;
- (id /* block */)criticalNodeFailureTest;
- (id)generateHTTPRequest;
- (id)init;
- (id)networkEvent;
- (int)networkEventType;
- (BOOL)operationFailsOnRequestFailure;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (BOOL)production;
- (id /* block */)requestCompletionHandler;
- (int)requestType;
- (id)requestUUID;
- (id)requests;
- (id)resultError;
- (id)resultErrorsByRequestID;
- (id)resultResponses;
- (void)setAdditionalRequestHTTPHeaders:(id)arg1;
- (void)setContainerName:(id)arg1;
- (void)setCriticalNodeFailureTest:(id /* block */)arg1;
- (void)setNetworkEvent:(id)arg1;
- (void)setNetworkEventType:(int)arg1;
- (void)setOperationFailsOnRequestFailure:(BOOL)arg1;
- (void)setProduction:(BOOL)arg1;
- (void)setRequestCompletionHandler:(id /* block */)arg1;
- (void)setRequestType:(int)arg1;
- (void)setRequestUUID:(id)arg1;
- (void)setRequests:(id)arg1;
- (void)setResultError:(id)arg1;
- (void)setResultErrorsByRequestID:(id)arg1;
- (void)setResultResponses:(id)arg1;
- (void)setTimeoutIntervalForRequest:(double)arg1;
- (double)timeoutIntervalForRequest;
- (BOOL)validateOperation;

@end
