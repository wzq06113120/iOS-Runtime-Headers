/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class UIImage, NSNumber, CLLocation, NSData, NSMutableOrderedSet, NSSet, NSDate, NSMutableSet, NSArray, NSDictionary, NSString, PLManagedAsset, NSURL;

@interface PLManagedAsset : _PLManagedAsset  {
    BOOL _didPrepareForDeletion;
    UIImage *inflightImage;
    UIImage *inflightIndexSheetImage;
    NSDictionary *inflightMetadata;
}

@property(readonly) BOOL hasEmbeddedThumbnail;
@property(readonly) NSData * embeddedThumbnailData;
@property(retain) NSNumber * embeddedThumbnailOffset;
@property int embeddedThumbnailOffsetValue;
@property(retain) NSNumber * embeddedThumbnailLength;
@property int embeddedThumbnailLengthValue;
@property(retain) NSNumber * embeddedThumbnailWidth;
@property short embeddedThumbnailWidthValue;
@property(retain) NSNumber * embeddedThumbnailHeight;
@property short embeddedThumbnailHeightValue;
@property(retain) NSMutableSet * faces;
@property(readonly) NSURL * assetURL;
@property(readonly) BOOL hasFullSizeImage;
@property(readonly) NSString * textBadgeString;
@property(readonly) UIImage * wallpaperFullScreenImage;
@property(readonly) NSURL * mainFileURL;
@property(readonly) NSString * pathForImageFile;
@property(readonly) NSSet * allFileURLs;
@property(readonly) NSSet * filePathsWithoutThumbs;
@property(readonly) NSString * pathForLargeThumbnailFile;
@property(readonly) NSString * pathForOriginalFile;
@property(readonly) NSURL * fileURLForLargeThumbnailFile;
@property(readonly) NSArray * allUniformTypeIdentifiers;
@property(readonly) NSString * fileExtension;
@property(readonly) NSString * pathForMetadataDirectory;
@property(readonly) NSURL * fileURLForMetadataDirectory;
@property(readonly) NSURL * fileURLForThumbnailFile;
@property(readonly) NSString * pathForPrebakedThumbnail;
@property(readonly) NSString * pathForPrebakedLandscapeScrubberThumbnails;
@property(readonly) NSURL * fileURLForPrebakedLandscapeScrubberThumbnails;
@property(readonly) NSString * pathForPrebakedPortraitScrubberThumbnails;
@property(readonly) NSURL * fileURLForPrebakedPortraitScrubberThumbnails;
@property(readonly) NSString * pathForPrebakedWildcatThumbnailsFile;
@property(readonly) NSString * pathForLowResolutionFile;
@property(readonly) NSString * pathForTrimmedVideoFile;
@property(readonly) NSString * pathForVideoPreviewFile;
@property(readonly) NSString * pathForVideoFile;
@property(readonly) NSString * pathForLargeDisplayableImageFile;
@property(readonly) NSURL * fileURLForLargeDisplayableImage;
@property(readonly) NSString * pathForXMPFile;
@property(readonly) BOOL hasXMPFile;
@property(readonly) BOOL hasFullSizeImageData;
@property(copy) NSString * utiType;
@property(readonly) NSString * mimeType;
@property(readonly) BOOL isJPEG;
@property int assetKind;
@property double captureTime;
@property struct CGSize { float x1; float x2; } imageSize;
@property(readonly) BOOL allowsRotation;
@property double recordModDate;
@property struct { double x1; double x2; } gpsCoordinate;
@property(readonly) BOOL hasLocationInfo;
@property(readonly) NSDate * date;
@property(readonly) BOOL isPhotoStreamPhoto;
@property(readonly) BOOL isVideo;
@property(readonly) BOOL isHDVideo;
@property(readonly) BOOL isPhoto;
@property(readonly) BOOL isAudio;
@property(readonly) BOOL allowsWallpaperEditing;
@property(readonly) NSArray * sortedSidecarFiles;
@property int highDynamicRangeTypeValue;
@property int savedAssetTypeValue;
@property(retain) CLLocation * location;
@property unsigned int thumbnailIndex;
@property(readonly) NSMutableOrderedSet * adjustments;
@property(retain) PLManagedAsset * originalAsset;
@property BOOL isInFlight;
@property(retain) UIImage * inflightImage;
@property(retain) UIImage * inflightIndexSheetImage;
@property(retain) NSDictionary * inflightMetadata;

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)pathsForAllIncompleteAssetsInManagedObjectContext:(id)arg1;
+ (id)incompleteAssetsInManagedObjectContext:(id)arg1;
+ (id)pathsForAssetsWithKind:(int)arg1 inManagedObjectContext:(id)arg2;
+ (id)assetsWithKind:(int)arg1 inManagedObjectContext:(id)arg2;
+ (unsigned int)countAssetsWithKind:(int)arg1 inManagedObjectContext:(id)arg2;
+ (id)_pathsByAssetUUIDFromFetchResults:(id)arg1 absolute:(BOOL)arg2;
+ (id)insertAssetIntoPhotoLibrary:(id)arg1 mainFileURL:(id)arg2 savedAssetType:(int)arg3 replacementUUID:(id)arg4 imageSource:(struct CGImageSource {}**)arg5 imageData:(id*)arg6;
+ (void)_copyAssets:(id)arg1 toCameraRollAndAddToAlbum:(id)arg2;
+ (id)_findExistingAssetWithMatchingDate:(id)arg1 inAlbum:(struct NSObject { Class x1; }*)arg2;
+ (id)assetWithObjectID:(id)arg1 inLibrary:(id)arg2;
+ (id)assetWithObjectID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)fileURLFromAssetURL:(id)arg1 photoLibrary:(id)arg2;
+ (id)photoFromAssetURL:(id)arg1 photoLibrary:(id)arg2;
+ (id)assetWithUUID:(id)arg1 inLibrary:(id)arg2;
+ (id)photoFromAssetURL:(id)arg1 photoLibrary:(id)arg2 sidecar:(id*)arg3;
+ (struct CGImage { }*)newUnrotatedImageWithSize:(struct CGSize { float x1; float x2; })arg1 originalImage:(struct CGImage { }*)arg2 imageOrientation:(int)arg3;
+ (id)pathForMetadataWithExtension:(id)arg1 forMediaInMainDirectory:(id)arg2 withFilename:(id)arg3;
+ (id)abbreviatedMetadataDirectoryForDirectory:(id)arg1;
+ (id)keyPathsForValuesAffectingIsJPEG;
+ (id)keyPathsForValuesAffectingMimeType;
+ (id)keyPathsForValuesAffectingUtiType;
+ (id)bestCreationDateForAssestAtURL:(id)arg1;
+ (id)keyPathsForValuesAffectingIsAudio;
+ (id)keyPathsForValuesAffectingIsPhoto;
+ (id)keyPathsForValuesAffectingIsVideo;
+ (id)keyPathsForValuesAffectingIsPhotoStreamPhoto;
+ (id)keyPathsForValuesAffectingDate;
+ (id)keyPathsForValuesAffectingHasLocationInfo;
+ (id)keyPathsForValuesAffectingGpsCoordinate;
+ (id)keyPathsForValuesAffectingRecordModDate;
+ (id)keyPathsForValuesAffectingImageSize;
+ (id)keyPathsForValuesAffectingCaptureTime;
+ (id)keyPathsForValuesAffectingAssetKind;
+ (id)assetWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (unsigned int)countUsedAssetsWithKind:(int)arg1 inManagedObjectContext:(id)arg2;
+ (void)copyAssets:(id)arg1 toAlbum:(struct NSObject { Class x1; }*)arg2;
+ (int)indexSheetFormat;
+ (int)posterThumbnailFormat;
+ (int)thumbnailFormat;
+ (int)portraitScrubberThumbnailFormat;
+ (int)landscapeScrubberThumbnailFormat;
+ (id)preferredFileExtensionForType:(id)arg1;
+ (int)fullSizeImageFormat;

- (void)setImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)awakeFromInsert;
- (void)awakeFromSnapshotEvents:(unsigned int)arg1;
- (void)prepareForDeletion;
- (void)awakeFromFetch;
- (void)willTurnIntoFault;
- (void)setLocation:(id)arg1;
- (id)mimeType;
- (id)location;
- (BOOL)isEditable;
- (struct CGSize { float x1; float x2; })imageSize;
- (id)date;
- (void)copyToPasteboard;
- (void)setHDRFlagFromImageProperties:(id)arg1;
- (id)pictureTransferProtocolInformationWithAlbumsObjectIDs:(id)arg1;
- (void)generateThumbnailsWithPreviewImage:(id)arg1 thumbnailImage:(id)arg2 existingThumbnailIndex:(unsigned int)arg3 fromImageSource:(struct CGImageSource { }*)arg4 imageData:(id)arg5 thumbnailDataByFormatID:(struct __CFDictionary { }*)arg6;
- (void)setSizeAndOrientationFromImageProperties:(id)arg1;
- (void)setLocationFromImageProperties:(id)arg1;
- (void)setThumbnailDataFromImageProperties:(id)arg1;
- (BOOL)setVideoInfoFromFileAtURL:(id)arg1;
- (void)setEmbeddedThumbnailHeightValue:(short)arg1;
- (short)embeddedThumbnailHeightValue;
- (void)setEmbeddedThumbnailWidthValue:(short)arg1;
- (short)embeddedThumbnailWidthValue;
- (void)setEmbeddedThumbnailLengthValue:(int)arg1;
- (void)setEmbeddedThumbnailOffsetValue:(int)arg1;
- (id)embeddedThumbnailData;
- (BOOL)hasEmbeddedThumbnail;
- (void)setEmbeddedThumbnailHeight:(id)arg1;
- (id)embeddedThumbnailHeight;
- (void)setEmbeddedThumbnailWidth:(id)arg1;
- (id)embeddedThumbnailWidth;
- (void)setEmbeddedThumbnailLength:(id)arg1;
- (id)embeddedThumbnailLength;
- (void)setEmbeddedThumbnailOffset:(id)arg1;
- (id)embeddedThumbnailOffset;
- (int)embeddedThumbnailOffsetValue;
- (int)embeddedThumbnailLengthValue;
- (id)addFaceWithRelativeRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 identifier:(short)arg2 albumUUID:(id)arg3;
- (id)faceWithIdentifier:(short)arg1;
- (void)setPersistedFileSystemAttributes;
- (void)updateFromPersistedFileSystemAttributes;
- (void)persistMetadataToFilesystem;
- (id)_highDynamicRangeTypeDesription;
- (id)_savedAssetTypeDesription;
- (id)_kindDesription;
- (BOOL)_isSavedAssetTypeValueValid:(int)arg1;
- (BOOL)hasGPS;
- (void)setOriginalAsset:(id)arg1;
- (id)originalAsset;
- (void)updateAdjustmentsWithAdjustmentMetadata:(id)arg1;
- (BOOL)isLocatedAtCoordinates:(struct { double x1; double x2; })arg1;
- (void)setThumbnailIndex:(unsigned int)arg1;
- (id)addAdjustment;
- (void)setIsInFlight:(BOOL)arg1;
- (void)unregisterForChanges;
- (void)registerForChanges;
- (unsigned int)thumbnailIndex;
- (void)setInflightMetadata:(id)arg1;
- (void)setInflightImage:(id)arg1;
- (id)assetURL;
- (id)assetURLWithExtension:(id)arg1;
- (id)assetURLForSidecarFile:(id)arg1;
- (id)wallpaperFullScreenImage;
- (id)newFullSizeImageForImagePickerClient;
- (id)newFullScreenImage:(const struct __CFDictionary {}**)arg1;
- (void)setInflightIndexSheetImage:(id)arg1;
- (id)inflightIndexSheetImage;
- (BOOL)_isValidUTI:(id)arg1 forService:(id)arg2;
- (BOOL)hasXMPFile;
- (id)pathForLowResolutionFile;
- (id)fileURLForLargeDisplayableImage;
- (id)pathForPrebakedWildcatThumbnailsFile;
- (id)pathForPrebakedThumbnail;
- (id)allUniformTypeIdentifiers;
- (id)allFileExtensions;
- (id)fileURLForSidecarFile:(id)arg1;
- (id)allFileURLs;
- (id)filePathsWithoutThumbs;
- (BOOL)isSavedPhotosAsset;
- (id)pathForMetadataDirectory;
- (id)fileURLForMetadataDirectory;
- (id)fileULRForMetadataWithExtension:(id)arg1;
- (id)pathForMetadataWithExtension:(id)arg1;
- (id)fileURLForPrebakedPortraitScrubberThumbnails;
- (id)fileURLForPrebakedLandscapeScrubberThumbnails;
- (id)fileURLForThumbnailFile;
- (id)fileURLForLargeThumbnailFile;
- (id)mainFileURL;
- (void)setUniformTypeIdentifierFromPathExtension:(id)arg1 assetKind:(int)arg2;
- (void)setUniformTypeIdentifierFromPathExtension:(id)arg1;
- (id)sortedSidecarFiles;
- (BOOL)allowsWallpaperEditing;
- (BOOL)hasLocationInfo;
- (void)setGpsCoordinate:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })gpsCoordinate;
- (void)setRecordModDate;
- (void)setRecordModDate:(double)arg1;
- (double)recordModDate;
- (void)setCaptureTime:(double)arg1;
- (double)captureTime;
- (void)setAssetKind:(int)arg1;
- (id)_prettyDescription;
- (void)setSavedAssetTypeValue:(int)arg1;
- (void)updateAssetKindFromUniformTypeIdentifier;
- (void)setUtiType:(id)arg1;
- (id)imageWithFormat:(int)arg1 outImageProperties:(const struct __CFDictionary {}**)arg2;
- (id)newFullSizeImage;
- (BOOL)hasFullSizeImageData;
- (void)updateAdjustmentsWithFiltersAndIdentifiers:(id)arg1;
- (id)pathForLargeThumbnailFile;
- (id)pathForXMPFile;
- (BOOL)setAttributesFromMainFileURL:(id)arg1 savedAssetType:(int)arg2 imageSource:(struct CGImageSource {}**)arg3 imageData:(id*)arg4;
- (int)savedAssetTypeValue;
- (id)utiType;
- (id)imageWithFormat:(int)arg1;
- (id)textBadgeString;
- (BOOL)isJPEG;
- (id)fileExtension;
- (void)setHighDynamicRangeTypeValue:(int)arg1;
- (id)inflightMetadata;
- (int)highDynamicRangeTypeValue;
- (id)newLowResolutionFullScreenImage;
- (BOOL)allowsRotation;
- (id)previewFrameImageFromDatabase;
- (id)pathForTrimmedVideoFile;
- (id)indexSheetImage;
- (id)pathForPrebakedPortraitScrubberThumbnails;
- (id)pathForPrebakedLandscapeScrubberThumbnails;
- (id)pathForVideoPreviewFile;
- (id)pathForOriginalFile;
- (void)addExtension:(id)arg1;
- (BOOL)isHDVideo;
- (id)mimeTypeForService:(id)arg1;
- (id)pathForLargeDisplayableImageFile;
- (id)fileExtensionForService:(id)arg1;
- (id)largestAvailableDataRepresentationAndType:(id*)arg1;
- (BOOL)hasFullSizeImage;
- (BOOL)isPhoto;
- (BOOL)isPhotoStreamPhoto;
- (id)pathForImageFile;
- (void)delete;
- (id)pathForVideoFile;
- (BOOL)canPerformEditOperation:(int)arg1;
- (int)assetKind;
- (BOOL)isInFlight;
- (BOOL)isAudio;
- (id)inflightImage;
- (void)save;
- (void)dealloc;
- (BOOL)isVideo;
- (void)saveBakedVideoThumbnail;

@end