//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, QLPrintPageRenderer;

@protocol QLPreviewContentControllerProtocol <NSObject>
@property int previewMode;
@property id <QLPreviewContentDelegate> delegate;
@property id <QLPreviewContentDataSource> dataSource;
- (void)togglePlayState;
- (void)endScrubbing;
- (void)scrubToValue:(double)arg1;
- (void)beginScrubbing;
- (id <QLRemotePrintPageHelper>)printPageHelper;
- (QLPrintPageRenderer *)printPageRenderer;
- (void)forceResignFirstResponder;
- (void)becomeForeground;
- (void)enterBackground;
- (void)setOverlayHidden:(BOOL)arg1 duration:(double)arg2;
- (void)setContentFrame:(struct CGRect)arg1;
- (void)willChangeContentFrame;
- (void)setTransitioning:(BOOL)arg1 synchronizedWithBlock:(void (^)(void))arg2;
- (void)setBlockRemoteImages:(BOOL)arg1;
- (void)setLoadingTextForMissingFiles:(NSString *)arg1;
- (void)checkCurrentPreviewItem;
- (void)refreshCurrentPreviewItem;
- (void)stopLoadingCurrentPreviewItem;
- (int)currentPreviewItemIndex;
- (void)setCurrentPreviewItemIndex:(int)arg1;
- (void)configureWithParameters:(NSDictionary *)arg1;
@end

