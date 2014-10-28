/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVDenyItem, CoreDAVGrantItem, CoreDAVInvertItem, CoreDAVItemWithHrefChildItem, CoreDAVItemWithNoChildren, CoreDAVPrincipalItem;

@interface CoreDAVACEItem : CoreDAVItem {
    CoreDAVDenyItem *_deny;
    CoreDAVGrantItem *_grant;
    CoreDAVItemWithHrefChildItem *_inherited;
    CoreDAVInvertItem *_invert;
    CoreDAVPrincipalItem *_principal;
    CoreDAVItemWithNoChildren *_protectedItem;
}

@property(retain) CoreDAVDenyItem * deny;
@property(retain) CoreDAVGrantItem * grant;
@property(retain) CoreDAVItemWithHrefChildItem * inherited;
@property(retain) CoreDAVInvertItem * invert;
@property(retain) CoreDAVPrincipalItem * principal;
@property(retain) CoreDAVItemWithNoChildren * protectedItem;

+ (id)copyParseRules;
+ (id)privilegeItemWithNameSpace:(id)arg1 andName:(id)arg2;

- (void)dealloc;
- (id)deny;
- (id)description;
- (id)grant;
- (id)inherited;
- (id)init;
- (id)initWithPrincipal:(id)arg1 shouldInvert:(BOOL)arg2 action:(int)arg3 withPrivileges:(id)arg4;
- (id)invert;
- (id)principal;
- (id)protectedItem;
- (void)setDeny:(id)arg1;
- (void)setGrant:(id)arg1;
- (void)setInherited:(id)arg1;
- (void)setInvert:(id)arg1;
- (void)setPrincipal:(id)arg1;
- (void)setProtectedItem:(id)arg1;
- (void)write:(id)arg1;

@end
