//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSNormalBaseEventHandler.h"

@class MSLayer, MSNormalEventData, MSSnapper;

@interface MSNormalResizeEventHandler : MSNormalBaseEventHandler
{
    struct CGPoint midPoint;
    struct CGPoint oppositePoint;
    struct CGPoint oppositeRotatedPoint;
    double originalProportions;
    long long _resizingCorner;
    MSLayer *_resizingLayer;
    MSSnapper *_layerSnapper;
    MSNormalEventData *_eventData;
}


- (void)calculateMidPoint;
- (void)calculateOppositePoint;
- (void)calculateOppositeRotatedPoint;
- (struct CGRect)centerRect:(struct CGRect)arg1;
- (id)currentGroup;
- (void)displayResizeCursor;
- (void)drawInRect:(struct CGRect)arg1;
@property(retain, nonatomic) MSNormalEventData *eventData; // @synthesize eventData=_eventData;
- (void)flipResizingLayerIfNecessary:(struct CGPoint)arg1;
- (void)handlerWillLoseFocus;
@property(retain, nonatomic) MSSnapper *layerSnapper; // @synthesize layerSnapper=_layerSnapper;
- (void)makeLayerIntegral:(id)arg1;
- (struct CGRect)makeRect:(struct CGRect)arg1 conformToProportions:(BOOL)arg2;
- (struct CGPoint)mouseAfterAccountingForRotation:(struct CGPoint)arg1;
- (BOOL)mouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (BOOL)mouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)mouseDraggedEvent:(id)arg1;
- (BOOL)mouseDraggedOutsideViewShouldMoveScrollOrigin;
- (BOOL)mouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (struct CGRect)newRectForResizeWithMouse:(struct CGPoint)arg1 fromCenter:(BOOL)arg2 maySnap:(BOOL)arg3 constrainProportions:(BOOL)arg4;
- (long long)oppositeCorner;
- (struct CGRect)placeRectInOppositeCorner:(struct CGRect)arg1;
- (void)prepareForResize;
@property(nonatomic) long long resizingCorner; // @synthesize resizingCorner=_resizingCorner;
@property(retain, nonatomic) MSLayer *resizingLayer; // @synthesize resizingLayer=_resizingLayer;
- (BOOL)shouldConstrainProportionsForFlags:(unsigned long long)arg1;
- (struct CGRect)snapRect:(struct CGRect)arg1 constrainProportions:(BOOL)arg2;
- (unsigned long long)validSnapEdgesForResizingCorner;

@end

