/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SSXPCCoding-Protocol.h"

@class NSArray, NSDate, NSNumber, NSString, SSItemContentRating;

@interface ISSoftwareApplication : NSObject <SSXPCCoding>
{
    NSNumber *_accountDSID;
    NSString *_accountIdentifier;
    NSString *_bundleIdentifier;
    NSString *_bundleShortVersionString;
    NSString *_bundleVersion;
    NSString *_containerPath;
    SSItemContentRating *_contentRating;
    NSString *_deviceIdentifierForVendor;
    NSNumber *_itemIdentifier;
    NSString *_itemName;
    _Bool _profileValidated;
    NSString *_softwareType;
    NSNumber *_storeFrontIdentifier;
    NSNumber *_versionIdentifier;
    NSArray *_versionOrdering;
    NSDate *_receiptExpirationDate;
    unsigned long long _vppStateFlags;
}

+ (id)lookupAttributeKeys;
@property(readonly, nonatomic) NSDate *receiptExpirationDate; // @synthesize receiptExpirationDate=_receiptExpirationDate;
@property(copy, nonatomic) NSArray *versionOrdering; // @synthesize versionOrdering=_versionOrdering;
@property(retain, nonatomic) NSNumber *versionIdentifier; // @synthesize versionIdentifier=_versionIdentifier;
@property(retain, nonatomic) NSNumber *storeFrontIdentifier; // @synthesize storeFrontIdentifier=_storeFrontIdentifier;
@property(copy, nonatomic) NSString *softwareType; // @synthesize softwareType=_softwareType;
@property(nonatomic, getter=isProfileValidated) _Bool profileValidated; // @synthesize profileValidated=_profileValidated;
@property(copy, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(retain, nonatomic) NSNumber *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(copy, nonatomic) NSString *deviceIdentifierForVendor; // @synthesize deviceIdentifierForVendor=_deviceIdentifierForVendor;
@property(copy, nonatomic) SSItemContentRating *contentRating; // @synthesize contentRating=_contentRating;
@property(copy, nonatomic) NSString *containerPath; // @synthesize containerPath=_containerPath;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy, nonatomic) NSString *bundleShortVersionString; // @synthesize bundleShortVersionString=_bundleShortVersionString;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(retain, nonatomic) NSNumber *accountDSID; // @synthesize accountDSID=_accountDSID;
- (void)_loadMetadataFromContainer:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
@property(readonly, nonatomic) unsigned long long vppStateFlags;
- (void)resetVPPStateFlags;
- (id)description;
- (void)dealloc;
- (id)initWithMobileInstallationDictionary:(id)arg1;

@end

