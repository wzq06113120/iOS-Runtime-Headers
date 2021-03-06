/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <OCCancelDelegate>, ESDContainer, ESDObject, ESDRoot, NSMutableArray, NSMutableDictionary, OADTheme, PBOfficeArtReaderState, PBOutlineBulletDictionary, PBSlideState, PDPresentation, PDSlideBase, TSUNoCopyDictionary;

@interface PBPresentationReaderState : NSObject {
    unsigned int mBulletIndex;
    <OCCancelDelegate> *mCancel;
    ESDObject *mCurrentBulletStyle;
    ESDObject *mCurrentMacCharStyle;
    struct ChVector<int> { int *x1; int *x2; unsigned int x3; unsigned int x4; unsigned int x5; } *mCurrentSlideTextBlockStartIndexVector;
    OADTheme *mDefaultTheme;
    ESDRoot *mDocumentRoot;
    NSMutableArray *mFontEntities;
    BOOL mHasCharacterPropertyBulletIndex;
    BOOL mHasSlideNumberPlaceholder;
    struct __CFDictionary { } *mHyperlinkMap;
    PBOfficeArtReaderState *mOfficeArtState;
    PBOutlineBulletDictionary *mPlaceholderBulletStyles;
    PBOutlineBulletDictionary *mPlaceholderMacCharStyles;
    struct PptBinaryReader { int (**x1)(); int (**x2)(); struct EshObjectFactory {} *x3; int (**x4)(); struct __sFILE {} *x5; struct SsrwOORootStorage { struct _Storage {} *x_6_1_1; unsigned short x_6_1_2[36]; struct _RootStorage {} *x_6_1_3; } x6; struct SsrwOOStorage {} *x7; struct SsrwOOStorage {} *x8; struct SsrwOOStream {} *x9; struct SsrwOOStream {} *x10; int x11; boolx12; struct PptEshReader {} *x13; struct PptEshReader {} *x14; struct PptParserVisitor {} *x15; struct PptPersistDir {} *x16; struct EshHeader {} *x17; struct EshObject {} *x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; struct ChMap<unsigned long, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned long> > { struct map<unsigned long, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned long>, std::allocator<std::pair<const unsigned long, PptBinaryReader::SKIP_CONDITIONS>> > { struct _Rb_tree<unsigned long, std::pair<const unsigned long, PptBinaryReader::SKIP_CONDITIONS>, std::_Select1st<std::pair<const unsigned long, PptBinaryReader::SKIP_CONDITIONS>>, CsLess<unsigned long>, std::allocator<std::pair<const unsigned long, PptBinaryReader::SKIP_CONDITIONS>> > { struct _Rb_tree_impl<CsLess<unsigned long>, false> { struct CsLess<unsigned long> { } x_1_4_1; struct _Rb_tree_node_base { int x_2_5_1; struct _Rb_tree_node_base {} *x_2_5_2; struct _Rb_tree_node_base {} *x_2_5_3; struct _Rb_tree_node_base {} *x_2_5_4; } x_1_4_2; unsigned int x_1_4_3; } x_1_3_1; } x_1_2_1; } x_25_1_1; } x25; struct PptObjectFactory {} *x26; struct EshMark {} *x27; int x28; struct ChVector<ChPair<unsigned long, EscherObjectEnums> > { struct ChPair<unsigned long, EscherObjectEnums> {} *x_29_1_1; struct ChPair<unsigned long, EscherObjectEnums> {} *x_29_1_2; unsigned int x_29_1_3; unsigned int x_29_1_4; unsigned int x_29_1_5; } x29; boolx30; } *mPptBinaryReader;
    NSMutableArray *mSlideIndexes;
    TSUNoCopyDictionary *mSlideMasterToMasterStyles;
    PBSlideState *mSlideState;
    struct ChVector<PBReaderMasterStyleInfo> { struct PBReaderMasterStyleInfo {} *x1; struct PBReaderMasterStyleInfo {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; } *mSrcCurrentMasterStyleInfoVector;
    struct ChVector<PBReaderMasterStyleInfo> { struct PBReaderMasterStyleInfo {} *x1; struct PBReaderMasterStyleInfo {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; } *mSrcDocMasterStyleInfoVector;
    unsigned long mSrcSlideId;
    ESDContainer *mSrcSlideListHolder;
    NSMutableDictionary *mTargetShapeToSourceTextBoxContainerHolderMap;
    unsigned int mTextLength;
    PDPresentation *mTgtPresentation;
    PDSlideBase *mTgtSlide;
}

@property(retain) <OCCancelDelegate> * cancelDelegate;
@property BOOL hasSlideNumberPlaceholder;
@property ESDContainer * sourceSlideListHolder;

- (struct PptBinaryReader { int (**x1)(); int (**x2)(); struct EshObjectFactory {} *x3; int (**x4)(); struct __sFILE {} *x5; struct SsrwOORootStorage { struct _Storage {} *x_6_1_1; unsigned short x_6_1_2[36]; struct _RootStorage {} *x_6_1_3; } x6; struct SsrwOOStorage {} *x7; struct SsrwOOStorage {} *x8; struct SsrwOOStream {} *x9; struct SsrwOOStream {} *x10; int x11; boolx12; struct PptEshReader {} *x13; struct PptEshReader {} *x14; struct PptParserVisitor {} *x15; struct PptPersistDir {} *x16; struct EshHeader {} *x17; struct EshObject {} *x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; struct ChMap<unsigned long, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned long> > { struct map<unsigned long, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned long>, std::allocator<std::pair<const unsigned long, PptBinaryReader::SKIP_CONDITIONS>> > { struct _Rb_tree<unsigned long, std::pair<const unsigned long, PptBinaryReader::SKIP_CONDITIONS>, std::_Select1st<std::pair<const unsigned long, PptBinaryReader::SKIP_CONDITIONS>>, CsLess<unsigned long>, std::allocator<std::pair<const unsigned long, PptBinaryReader::SKIP_CONDITIONS>> > { struct _Rb_tree_impl<CsLess<unsigned long>, false> { struct CsLess<unsigned long> { } x_1_4_1; struct _Rb_tree_node_base { int x_2_5_1; struct _Rb_tree_node_base {} *x_2_5_2; struct _Rb_tree_node_base {} *x_2_5_3; struct _Rb_tree_node_base {} *x_2_5_4; } x_1_4_2; unsigned int x_1_4_3; } x_1_3_1; } x_1_2_1; } x_25_1_1; } x25; struct PptObjectFactory {} *x26; struct EshMark {} *x27; int x28; struct ChVector<ChPair<unsigned long, EscherObjectEnums> > { struct ChPair<unsigned long, EscherObjectEnums> {} *x_29_1_1; struct ChPair<unsigned long, EscherObjectEnums> {} *x_29_1_2; unsigned int x_29_1_3; unsigned int x_29_1_4; unsigned int x_29_1_5; } x29; boolx30; }*)reader;
- (void)addFontEntity:(id)arg1 charSet:(int)arg2 type:(int)arg3 family:(int)arg4;
- (void)addSlideIndex:(int)arg1;
- (id)baseTextListStyle;
- (unsigned int)bulletIndex;
- (id)cancelDelegate;
- (id)currentBulletStyle;
- (id)currentMacCharStyle;
- (struct ChVector<int> { int *x1; int *x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)currentSlideTextBlockStartIndexVector;
- (struct PBReaderMasterStyleInfo { struct PptTextMasterStyleAtom {} *x1; struct PptTextMasterStyle9Atom {} *x2; }*)currentSourceMasterStyleInfoOfType:(int)arg1;
- (void)dealloc;
- (id)defaultTheme;
- (struct PBReaderMasterStyleInfo { struct PptTextMasterStyleAtom {} *x1; struct PptTextMasterStyle9Atom {} *x2; }*)docSourceMasterStyleInfoOfType:(int)arg1;
- (id)documentRoot;
- (id)fontEntityAtIndex:(unsigned int)arg1;
- (unsigned int)fontEntityCount;
- (int)getSlideIndexAt:(int)arg1;
- (BOOL)hasCharacterPropertyBulletIndex;
- (BOOL)hasCurrentSourceMasterStyleInfoVector;
- (BOOL)hasSlideNumberPlaceholder;
- (id)hyperlinkInfoWithId:(unsigned long)arg1 createIfAbsent:(BOOL)arg2;
- (id)initWithReader:(struct PptBinaryReader { int (**x1)(); int (**x2)(); struct EshObjectFactory {} *x3; int (**x4)(); struct __sFILE {} *x5; struct SsrwOORootStorage { struct _Storage {} *x_6_1_1; unsigned short x_6_1_2[36]; struct _RootStorage {} *x_6_1_3; } x6; struct SsrwOOStorage {} *x7; struct SsrwOOStorage {} *x8; struct SsrwOOStream {} *x9; struct SsrwOOStream {} *x10; int x11; boolx12; struct PptEshReader {} *x13; struct PptEshReader {} *x14; struct PptParserVisitor {} *x15; struct PptPersistDir {} *x16; struct EshHeader {} *x17; struct EshObject {} *x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; struct ChMap<unsigned long, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned long> > { struct map<unsigned long, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned long>, std::allocator<std::pair<const unsigned long, PptBinaryReader::SKIP_CONDITIONS>> > { struct _Rb_tree<unsigned long, std::pair<const unsigned long, PptBinaryReader::SKIP_CONDITIONS>, std::_Select1st<std::pair<const unsigned long, PptBinaryReader::SKIP_CONDITIONS>>, CsLess<unsigned long>, std::allocator<std::pair<const unsigned long, PptBinaryReader::SKIP_CONDITIONS>> > { struct _Rb_tree_impl<CsLess<unsigned long>, false> { struct CsLess<unsigned long> { } x_1_4_1; struct _Rb_tree_node_base { int x_2_5_1; struct _Rb_tree_node_base {} *x_2_5_2; struct _Rb_tree_node_base {} *x_2_5_3; struct _Rb_tree_node_base {} *x_2_5_4; } x_1_4_2; unsigned int x_1_4_3; } x_1_3_1; } x_1_2_1; } x_25_1_1; } x25; struct PptObjectFactory {} *x26; struct EshMark {} *x27; int x28; struct ChVector<ChPair<unsigned long, EscherObjectEnums> > { struct ChPair<unsigned long, EscherObjectEnums> {} *x_29_1_1; struct ChPair<unsigned long, EscherObjectEnums> {} *x_29_1_2; unsigned int x_29_1_3; unsigned int x_29_1_4; unsigned int x_29_1_5; } x29; boolx30; }*)arg1 tgtPresentation:(id)arg2;
- (BOOL)isCancelled;
- (id)masterStyles:(id)arg1;
- (int)numberOfSlideIndexes;
- (id)officeArtState;
- (void)resetSlideState;
- (void)setBulletIndex:(unsigned int)arg1;
- (void)setCancelDelegate:(id)arg1;
- (void)setCurrentBulletStyle:(id)arg1 macCharStyle:(id)arg2;
- (void)setCurrentSourceMasterStyleInfoVector:(struct ChVector<PBReaderMasterStyleInfo> { struct PBReaderMasterStyleInfo {} *x1; struct PBReaderMasterStyleInfo {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)arg1;
- (void)setCurrentTextType:(int)arg1 placeholderIndex:(unsigned long)arg2;
- (void)setDefaultTheme:(id)arg1;
- (void)setDocumentRoot:(id)arg1;
- (void)setHasCharacterPropertyBulletIndex:(BOOL)arg1;
- (void)setHasSlideNumberPlaceholder:(BOOL)arg1;
- (void)setMasterStyles:(id)arg1 slideMaster:(id)arg2;
- (void)setPlaceholderBulletStyles:(id)arg1;
- (void)setPlaceholderMacCharStyles:(id)arg1;
- (void)setSourceSlideId:(unsigned long)arg1;
- (void)setSourceSlideListHolder:(id)arg1;
- (void)setSourceTextBoxContainerHolder:(id)arg1 forTargetShape:(id)arg2;
- (void)setTextLength:(unsigned int)arg1;
- (void)setTgtSlide:(id)arg1;
- (id)slideIndexesRef;
- (id)slideState;
- (id)sourceSlideListHolder;
- (id)sourceTextBoxContainerHolderForTargetShape:(id)arg1;
- (unsigned int)textLength;
- (id)tgtPresentation;
- (id)tgtSlide;

@end
