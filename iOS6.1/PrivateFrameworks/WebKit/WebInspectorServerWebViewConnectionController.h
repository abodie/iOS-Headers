/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, WebInspectorServer;

@interface WebInspectorServerWebViewConnectionController : NSObject
{
    WebInspectorServer *_server;
    NSMutableDictionary *_openConnections;
    BOOL _hasScheduledPush;
}

- (void)sendMessageToFrontend:(id)arg1 userInfo:(id)arg2;
- (void)connectionClosing:(id)arg1;
- (void)receivedMessage:(id)arg1 userInfo:(id)arg2;
- (void)_receivedConnectionDied:(id)arg1;
- (void)_receivedIndicate:(id)arg1;
- (void)_receivedGetListing:(id)arg1;
- (void)_receivedDidClose:(id)arg1;
- (void)_receivedData:(id)arg1;
- (void)_receivedSetup:(id)arg1;
- (void)pushListing;
- (void)pushListing:(id)arg1;
- (void)_pushListing:(id)arg1;
- (id)_listingForWebView:(id)arg1 pageId:(id)arg2 registry:(id)arg3;
- (void)closeAllConnections;
- (void)dealloc;
- (id)initWithServer:(id)arg1;

@end

