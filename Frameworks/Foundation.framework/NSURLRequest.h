/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURLRequestInternal;

@interface NSURLRequest : NSObject <NSCoding, NSCopying, NSMutableCopying> {
    NSURLRequestInternal *_internal;
}

@property(readonly) BOOL HS_isCancelled;

+ (BOOL)allowsAnyHTTPSCertificateForHost:(id)arg1;
+ (id)allowsSpecificHTTPSCertificateForHost:(id)arg1;
+ (void)checkForSharedCookieStoreNeed:(struct _CFURLRequest { }*)arg1;
+ (double)defaultTimeoutInterval;
+ (id)requestWithURL:(id)arg1 cachePolicy:(unsigned int)arg2 timeoutInterval:(double)arg3;
+ (id)requestWithURL:(id)arg1;
+ (void)setAllowsAnyHTTPSCertificate:(BOOL)arg1 forHost:(id)arg2;
+ (void)setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2;
+ (void)setDefaultTimeoutInterval:(double)arg1;

- (id)DARequestByApplyingStorageSession:(struct __CFURLStorageSession { }*)arg1;
- (void)HS_cancel;
- (BOOL)HS_isCancelled;
- (id)HTTPBody;
- (id)HTTPBodyStream;
- (id)HTTPContentType;
- (id)HTTPExtraCookies;
- (id)HTTPMethod;
- (id)HTTPReferrer;
- (BOOL)HTTPShouldHandleCookies;
- (BOOL)HTTPShouldUsePipelining;
- (id)HTTPUserAgent;
- (id)URL;
- (struct _CFURLRequest { }*)_CFURLRequest;
- (BOOL)_URLHasScheme:(id)arg1;
- (id)_copyReplacingURLWithURL:(id)arg1;
- (id)_gkDictionaryKey;
- (id)_initWithCFURLRequest:(struct _CFURLRequest { }*)arg1;
- (id)_propertyForKey:(id)arg1;
- (void)_removePropertyForKey:(id)arg1;
- (void)_setProperty:(id)arg1 forKey:(id)arg2;
- (id)_web_HTTPContentType;
- (id)_web_HTTPReferrer;
- (BOOL)_web_isConditionalRequest;
- (id)allHTTPHeaderFields;
- (BOOL)allowsCellularAccess;
- (id)boundInterfaceIdentifier;
- (unsigned int)cachePolicy;
- (id)contentDispositionEncodingFallbackArray;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 cachePolicy:(unsigned int)arg2 timeoutInterval:(double)arg3;
- (id)initWithURL:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)mainDocumentURL;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)networkServiceType;
- (double)timeoutInterval;
- (id)valueForHTTPHeaderField:(id)arg1;

@end
