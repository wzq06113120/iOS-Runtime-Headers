/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADStroke;



@interface OADTableCellBorderStyle : NSObject 
{
    OADStroke *mLeftStroke;
    OADStroke *mRightStroke;
    OADStroke *mTopStroke;
    OADStroke *mBottomStroke;
    OADStroke *mHorzInsideStroke;
    OADStroke *mVertInsideStroke;
    OADStroke *mTopLeftToBottomRightStroke;
    OADStroke *mBottomLeftToTopRightStroke;
}

+ (id)defaultAxisParallelStroke;
+ (id)defaultObliqueStroke;
+ (id)defaultStyle;

- (void)dealloc;
- (id)stroke:(NSInteger)arg1;
- (id)leftStroke;
- (void)setLeftStroke:(id)arg1;
- (id)rightStroke;
- (void)setRightStroke:(id)arg1;
- (id)topStroke;
- (void)setTopStroke:(id)arg1;
- (id)bottomStroke;
- (void)setBottomStroke:(id)arg1;
- (id)horzInsideStroke;
- (void)setHorzInsideStroke:(id)arg1;
- (id)vertInsideStroke;
- (void)setVertInsideStroke:(id)arg1;
- (id)topLeftToBottomRightStroke;
- (void)setTopLeftToBottomRightStroke:(id)arg1;
- (id)bottomLeftToTopRightStroke;
- (void)setBottomLeftToTopRightStrokeStroke:(id)arg1;

@end