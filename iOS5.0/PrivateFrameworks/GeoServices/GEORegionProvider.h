/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

@class NSMutableArray, NSString;

@interface GEORegionProvider : PBCodable
{
    NSMutableArray *_regions;
    NSString *_provider;
}

@property(retain, nonatomic) NSString *provider; // @synthesize provider=_provider;
@property(retain, nonatomic) NSMutableArray *regions; // @synthesize regions=_regions;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasProvider;
- (id)regionAtIndex:(unsigned int)arg1;
- (unsigned int)regionsCount;
- (void)addRegion:(id)arg1;
- (void)dealloc;

@end

