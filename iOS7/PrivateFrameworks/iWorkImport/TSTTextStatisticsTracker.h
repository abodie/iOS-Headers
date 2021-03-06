/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "TSKChangeSourceObserver-Protocol.h"
#import "TSWPStorageObserver-Protocol.h"
#import "TSWPTextStatisticsTracking-Protocol.h"

@class NSMutableArray, TSTTableInfo, TSWPTextStatistics;

// Not exported
@interface TSTTextStatisticsTracker : NSObject <TSWPTextStatisticsTracking, TSKChangeSourceObserver, TSWPStorageObserver>
{
    id <TSWPStatisticsControlling> mStatisticsController;
    TSTTableInfo *mTableInfo;
    CDStruct_5f1f7aa9 mCellRange;
    NSMutableArray *mStatArray;
    TSWPTextStatistics *mTotalStatistics;
}

- (id).cxx_construct;
- (void)dealloc;
- (void)storage:(id)arg1 didChangeRange:(struct _NSRange)arg2 delta:(long long)arg3 broadcastKind:(int)arg4;
- (void)syncProcessChanges:(id)arg1 forChangeSource:(id)arg2;
- (id)statistics;
- (void)incrementallyUpdateStatisticsUntil:(id)arg1;
- (void)tearDown;
- (id)initWithController:(id)arg1 andObject:(id)arg2;
- (void)p_updateStats:(id)arg1 withCell:(id)arg2;

@end

