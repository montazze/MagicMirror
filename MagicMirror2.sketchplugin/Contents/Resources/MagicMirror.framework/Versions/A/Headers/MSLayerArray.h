//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSLayerContainment.h"
#import "NSFastEnumeration.h"

@class NSArray;

@protocol MSLayerArray <NSObject>

+ (id)arrayWithLayer:(id)arg1;
+ (id)arrayWithLayers:(id)arg1;
+ (id)emptyArray;

- (id)addStylePartsOfType:(unsigned long long)arg1;
- (BOOL)canBeContainedByDocument;
- (BOOL)canBeContainedByGroup;
- (BOOL)canContainLayer:(id)arg1;
- (id)commonArtboard;
- (id)containedLayers;
- (unsigned long long)containedLayersCount;
- (BOOL)containsLayers;
- (BOOL)containsMultipleLayers;
- (BOOL)containsNoOrOneLayers;
- (BOOL)containsOneLayer;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)effectiveArtboard;
- (id)effectivePage;
- (id)effectiveParent;
- (void)enumerateLayers:(CDUnknownBlockType)arg1;
- (BOOL)enumerateLayersWithOptions:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (id)firstLayer;
- (unsigned long long)indexOfLayer:(id)arg1;
- (id)initWithLayers:(id)arg1;
- (id)lastLayer;
- (id)layerAtIndex:(unsigned long long)arg1;
- (id)layerToInsertAfter;
@property(copy, nonatomic) NSArray *layers; // @synthesize layers=_layers;
- (id)layersSuitableForInsertingIntoGroup:(id)arg1;
- (id)map:(CDUnknownBlockType)arg1;
- (void)removeUnusedStylePartsOfType:(unsigned long long)arg1;
- (id)uniqueParents;

@end

