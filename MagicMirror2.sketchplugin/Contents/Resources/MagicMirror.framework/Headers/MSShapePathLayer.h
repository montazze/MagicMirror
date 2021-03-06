//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSShapePathLayer.h"

@class NSBezierPath;

@interface MSShapePathLayer : _MSShapePathLayer <NSCoding>
{
    BOOL _isEditing;
}

+ (id)keyPathsForValuesAffectingPreviewImages;
+ (id)shapeWithPath:(id)arg1;
+ (id)shapeWithShapePath:(id)arg1 inRect:(struct CGRect)arg2;
+ (unsigned long long)traits;
- (struct CGPoint)absolutePoint:(struct CGPoint)arg1;
- (id)addContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3 action:(unsigned long long *)arg4;
- (void)addMenuItemNamed:(id)arg1 to:(id)arg2 withImage:(id)arg3 tag:(long long)arg4;
- (id)addPolygonContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3 action:(unsigned long long *)arg4;
- (id)addShapeContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3 action:(unsigned long long *)arg4;
- (void)adjustFrameAfterEdit;
- (void)adjustFrameAfterEditIntegral:(BOOL)arg1;
- (id)allCurvePoints;
- (void)applyPropertiesToBezier:(id)arg1;
- (id)badgeMap;
- (id)badgeMenu;
@property(retain, nonatomic) NSBezierPath *bezierPath;
- (id)bezierPathForCursorPreview;
- (id)bezierPathForHover;
- (id)bezierPathInRect:(struct CGRect)arg1;
- (id)bezierPathWithTransforms;
- (BOOL)booleanOperationCanBeReset;
- (struct CGRect)boundsForCursorPreview;
- (BOOL)calculateHasBlendedLayer;
- (BOOL)canBeContainedByGroup;
- (BOOL)canBeHidden;
- (BOOL)canBePartOfSymbol;
- (BOOL)canCopyToLayer:(id)arg1 beforeLayer:(id)arg2;
- (BOOL)canSmartRotate;
- (void)closeLastPath:(BOOL)arg1;
- (void)copyToLayer:(id)arg1 beforeLayer:(id)arg2;
- (id)defaultName;
- (void)drawPreviewInRect:(struct CGRect)arg1 selected:(BOOL)arg2;
- (BOOL)editable;
- (id)embedInShapeGroup;
- (BOOL)handleDoubleClick;
- (id)handlerName;
- (void)hideSelectionTemporarily;
- (void)initEmptyObject;
- (id)insertionCursor;
- (void)invalidateCache;
@property(nonatomic) BOOL isClosed;
@property(nonatomic) BOOL isEditing; // @synthesize isEditing=_isEditing;
- (BOOL)isExportableViaDragAndDrop;
- (BOOL)isLayerExportable;
- (BOOL)isLine;
- (BOOL)isNearlyEmpty;
- (BOOL)isPartOfClippingMask;
- (void)layerDidChange;
- (void)layerDidResizeFromRect:(struct CGRect)arg1 corner:(long long)arg2;
- (id)layerSuitableForInsertingIntoGroup:(id)arg1;
- (void)markLayerDirtyOfType:(unsigned long long)arg1;
- (void)moveToLayer:(id)arg1 beforeLayer:(id)arg2;
- (void)multiplyBy:(double)arg1;
- (struct CGRect)newRectForAdjustingFrameAfterEditIntegral:(BOOL)arg1;
- (void)onBooleanOperation:(id)arg1;
- (struct CGPoint)pointCenteredAfterPointIndex:(long long)arg1;
- (void)prepareObjectCopy:(id)arg1;
- (void)rectDidChange:(id)arg1 fromRect:(struct CGRect)arg2;
- (struct CGPoint)relativePoint:(struct CGPoint)arg1;
- (struct CGRect)relativeRectWithExporter:(id)arg1;
- (void)removeFromParent;
- (void)removePathsAndReset;
- (void)resetPoints;
- (void)reversePath;
- (unsigned long long)selectedBadgeMenuItem;
- (void)setBooleanOperation:(long long)arg1;
- (void)setEndDecorationType:(unsigned long long)arg1;
- (void)setFrameInArtboard:(struct CGRect)arg1 insertingIntoGroup:(id)arg2;
- (void)setRotation:(double)arg1;
- (void)setStartDecorationType:(unsigned long long)arg1;
- (BOOL)shouldCachePreview;
- (BOOL)shouldDrawSelection;
- (void)simplify;
- (BOOL)supportsInnerOuterBorders;
- (void)toggleClosePath;
- (void)transformPointsToNewRect:(struct CGRect)arg1;
- (id)usedStyle;

@end

