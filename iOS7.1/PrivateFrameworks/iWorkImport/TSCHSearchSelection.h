//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCHSelection.h>

@class NSString, TSCHSelectionPath;

__attribute__((visibility("hidden")))
@interface TSCHSearchSelection : TSCHSelection
{
    NSString *mOriginalString;
    struct _NSRange mRange;
}

@property(readonly, nonatomic) NSString *originalString; // @synthesize originalString=mOriginalString;
@property(readonly, nonatomic) struct _NSRange range; // @synthesize range=mRange;
- (id)searchSelectionForReplacingWithString:(id)arg1 options:(unsigned int)arg2;
- (id)stringByReplacingSelectionWithString:(id)arg1 options:(unsigned int)arg2;
@property(readonly, nonatomic) TSCHSelectionPath *path;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithChartInfo:(id)arg1 path:(id)arg2 originalString:(id)arg3 range:(struct _NSRange)arg4;
- (id)initWithChartInfo:(id)arg1 paths:(id)arg2;

@end

