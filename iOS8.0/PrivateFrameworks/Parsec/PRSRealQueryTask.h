//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Parsec/PRSQueryTask.h>

#import "PRSParsecDataHandler.h"

@class NSMutableData, NSString, NSURLSessionDataTask;

@interface PRSRealQueryTask : PRSQueryTask <PRSParsecDataHandler>
{
    BOOL _doResume;
    BOOL _failed;
    BOOL _doCache;
    NSURLSessionDataTask *_dataTask;
    NSMutableData *_collectedData;
    NSString *_queryString;
    id <PRSSessionController> _factory;
    float _scaleFactor;
    double _startTime;
}

@property float scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) __weak id <PRSSessionController> factory; // @synthesize factory=_factory;
@property(retain, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSMutableData *collectedData; // @synthesize collectedData=_collectedData;
@property(retain, nonatomic) NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
@property BOOL doCache; // @synthesize doCache=_doCache;
@property BOOL failed; // @synthesize failed=_failed;
@property BOOL doResume; // @synthesize doResume=_doResume;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)_processSearchResponseOnClientQueue:(id)arg1;
- (void)cancel;
- (void)resume;
- (void)triggerQuery:(BOOL)arg1;
- (id)initWithSession:(id)arg1 handler:(id)arg2 factory:(id)arg3 queue:(id)arg4 scaleFactor:(float)arg5 feedback:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

