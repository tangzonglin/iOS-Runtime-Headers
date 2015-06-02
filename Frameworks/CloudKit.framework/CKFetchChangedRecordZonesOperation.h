/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchChangedRecordZonesOperation : CKDatabaseOperation {
    id /* block */ _fetchChangedRecordZonesCompletionBlock;
    CKServerChangeToken *_previousServerChangeToken;
    id /* block */ _recordZoneWithIDChangedBlock;
    id /* block */ _recordZoneWithIDWasDeletedBlock;
    unsigned int _resultsLimit;
    CKServerChangeToken *_serverChangeToken;
    int _status;
}

@property (nonatomic, copy) id /* block */ fetchChangedRecordZonesCompletionBlock;
@property (nonatomic, readonly) BOOL moreComing;
@property (nonatomic, copy) CKServerChangeToken *previousServerChangeToken;
@property (nonatomic, copy) id /* block */ recordZoneWithIDChangedBlock;
@property (nonatomic, copy) id /* block */ recordZoneWithIDWasDeletedBlock;
@property (nonatomic) unsigned int resultsLimit;
@property (nonatomic, retain) CKServerChangeToken *serverChangeToken;
@property (nonatomic) int status;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id /* block */)fetchChangedRecordZonesCompletionBlock;
- (void)fillOutOperationInfo:(id)arg1;
- (id)initWithPreviousServerChangeToken:(id)arg1;
- (BOOL)moreComing;
- (void)performCKOperation;
- (id)previousServerChangeToken;
- (id /* block */)recordZoneWithIDChangedBlock;
- (id /* block */)recordZoneWithIDWasDeletedBlock;
- (unsigned int)resultsLimit;
- (id)serverChangeToken;
- (void)setFetchChangedRecordZonesCompletionBlock:(id /* block */)arg1;
- (void)setPreviousServerChangeToken:(id)arg1;
- (void)setRecordZoneWithIDChangedBlock:(id /* block */)arg1;
- (void)setRecordZoneWithIDWasDeletedBlock:(id /* block */)arg1;
- (void)setResultsLimit:(unsigned int)arg1;
- (void)setServerChangeToken:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;

@end