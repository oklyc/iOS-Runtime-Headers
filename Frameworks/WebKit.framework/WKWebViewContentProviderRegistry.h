/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface WKWebViewContentProviderRegistry : NSObject {
    struct HashMap<WTF::String, Class<WKWebViewContentProvider>, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<Class<WKWebViewContentProvider> > > { 
        struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, Class<WKWebViewContentProvider> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, Class<WKWebViewContentProvider> > >, WTF::CaseFoldingHash, WTF::HashMap<WTF::String, Class<WKWebViewContentProvider>, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<Class<WKWebViewContentProvider> > >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { 
            struct KeyValuePair<WTF::String, Class<WKWebViewContentProvider> > {} *m_table; 
            int m_tableSize; 
            int m_tableSizeMask; 
            int m_keyCount; 
            int m_deletedCount; 
        } m_impl; 
    struct HashCountedSet<WebKit::WebPageProxy *, WTF::PtrHash<WebKit::WebPageProxy *>, WTF::HashTraits<WebKit::WebPageProxy *> > { 
        struct HashMap<WebKit::WebPageProxy *, unsigned int, WTF::PtrHash<WebKit::WebPageProxy *>, WTF::HashTraits<WebKit::WebPageProxy *>, WTF::HashTraits<unsigned int> > { 
            struct HashTable<WebKit::WebPageProxy *, WTF::KeyValuePair<WebKit::WebPageProxy *, unsigned int>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebKit::WebPageProxy *, unsigned int> >, WTF::PtrHash<WebKit::WebPageProxy *>, WTF::HashMap<WebKit::WebPageProxy *, unsigned int, WTF::PtrHash<WebKit::WebPageProxy *>, WTF::HashTraits<WebKit::WebPageProxy *>, WTF::HashTraits<unsigned int> >::KeyValuePairTraits, WTF::HashTraits<WebKit::WebPageProxy *> > { 
                struct KeyValuePair<WebKit::WebPageProxy *, unsigned int> {} *m_table; 
                int m_tableSize; 
                int m_tableSizeMask; 
                int m_keyCount; 
                int m_deletedCount; 
            } m_impl; 
        } m_impl; 
    } _contentProviderForMIMEType;
    } _pages;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Vector<WTF::String, 0, WTF::CrashOnOverflow> { struct String {} *x1; unsigned int x2; unsigned int x3; })_mimeTypesWithCustomContentProviders;
- (void)addPage:(struct WebPageProxy { int (**x1)(); id x2; int (**x3)(); int (**x4)(); int (**x5)(); struct PageClient {} *x6; struct unique_ptr<API::LoaderClient, std::__1::default_delete<API::LoaderClient> > { struct __compressed_pair<API::LoaderClient *, std::__1::default_delete<API::LoaderClient> > { struct LoaderClient {} *x_1_2_1; } x_7_1_1; } x7; struct unique_ptr<API::PolicyClient, std::__1::default_delete<API::PolicyClient> > { struct __compressed_pair<API::PolicyClient *, std::__1::default_delete<API::PolicyClient> > { struct PolicyClient {} *x_1_2_1; } x_8_1_1; } x8; struct unique_ptr<API::FormClient, std::__1::default_delete<API::FormClient> > { struct __compressed_pair<API::FormClient *, std::__1::default_delete<API::FormClient> > { struct FormClient {} *x_1_2_1; } x_9_1_1; } x9; struct unique_ptr<API::UIClient, std::__1::default_delete<API::UIClient> > { struct __compressed_pair<API::UIClient *, std::__1::default_delete<API::UIClient> > { struct UIClient {} *x_1_2_1; } x_10_1_1; } x10; struct unique_ptr<API::FindClient, std::__1::default_delete<API::FindClient> > { struct __compressed_pair<API::FindClient *, std::__1::default_delete<API::FindClient> > { struct FindClient {} *x_1_2_1; } x_11_1_1; } x11; struct WebFindMatchesClient { struct WKPageFindMatchesClientV0 { struct WKPageFindMatchesClientBase { int x_1_3_1; void *x_1_3_2; } x_1_2_1; int (*x_1_2_2)(); int (*x_1_2_3)(); } x_12_1_1; } x12; struct unique_ptr<WebKit::DrawingAreaProxy, std::__1::default_delete<WebKit::DrawingAreaProxy> > { struct __compressed_pair<WebKit::DrawingAreaProxy *, std::__1::default_delete<WebKit::DrawingAreaProxy> > { struct DrawingAreaProxy {} *x_1_2_1; } x_13_1_1; } x13; struct unique_ptr<WebKit::RemoteScrollingCoordinatorProxy, std::__1::default_delete<WebKit::RemoteScrollingCoordinatorProxy> > { struct __compressed_pair<WebKit::RemoteScrollingCoordinatorProxy *, std::__1::default_delete<WebKit::RemoteScrollingCoordinatorProxy> > { struct RemoteScrollingCoordinatorProxy {} *x_1_2_1; } x_14_1_1; } x14; struct Ref<WebKit::WebProcessProxy> { struct WebProcessProxy {} *x_15_1_1; } x15; struct Ref<WebKit::WebPageGroup> { struct WebPageGroup {} *x_16_1_1; } x16; struct Ref<WebKit::WebPreferences> { struct WebPreferences {} *x_17_1_1; } x17; struct RefPtr<WebKit::WebUserContentControllerProxy> { struct WebUserContentControllerProxy {} *x_18_1_1; } x18; struct Ref<WebKit::VisitedLinkProvider> { struct VisitedLinkProvider {} *x_19_1_1; } x19; struct RefPtr<WebKit::WebFrameProxy> { struct WebFrameProxy {} *x_20_1_1; } x20; struct RefPtr<WebKit::WebFrameProxy> { struct WebFrameProxy {} *x_21_1_1; } x21; struct RefPtr<WebKit::WebFrameProxy> { struct WebFrameProxy {} *x_22_1_1; } x22; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_23_1_1; } x23; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_24_1_1; } x24; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_25_1_1; } x25; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_26_1_1; } x26; struct RefPtr<WebKit::WebInspectorProxy> { struct WebInspectorProxy {} *x_27_1_1; } x27; struct RefPtr<WebKit::WebVideoFullscreenManagerProxy> { struct WebVideoFullscreenManagerProxy {} *x_28_1_1; } x28; struct VisibleContentRectUpdateInfo { struct FloatRect { struct FloatPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct FloatSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_29_1_1; struct FloatRect { struct FloatPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct FloatSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_29_1_2; struct FloatRect { struct FloatPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct FloatSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_29_1_3; struct FloatRect { struct FloatPoint { float x_1_3_1; float x_1_3_2; } x_4_2_1; struct FloatSize { float x_2_3_1; float x_2_3_2; } x_4_2_2; } x_29_1_4; double x_29_1_5; boolx_29_1_6; boolx_29_1_7; double x_29_1_8; double x_29_1_9; double x_29_1_10; double x_29_1_11; unsigned long long x_29_1_12; } x29; int x30; boolx31; boolx32; unsigned long long x33; struct CallbackMap { struct HashMap<unsigned long long, WTF::RefPtr<WebKit::CallbackBase>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RefPtr<WebKit::CallbackBase> > > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::CallbackBase> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::CallbackBase> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RefPtr<WebKit::CallbackBase>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RefPtr<WebKit::CallbackBase> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::CallbackBase> > {} *x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_1_2_1; } x_34_1_1; } x34; struct HashSet<unsigned long long, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long> > { struct HashTable<unsigned long long, unsigned long long, WTF::IdentityExtractor, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<unsigned long long> > { unsigned long long *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_35_1_1; } x35; struct HashSet<WebKit::WebEditCommandProxy *, WTF::PtrHash<WebKit::WebEditCommandProxy *>, WTF::HashTraits<WebKit::WebEditCommandProxy *> > { struct HashTable<WebKit::WebEditCommandProxy *, WebKit::WebEditCommandProxy *, WTF::IdentityExtractor, WTF::PtrHash<WebKit::WebEditCommandProxy *>, WTF::HashTraits<WebKit::WebEditCommandProxy *>, WTF::HashTraits<WebKit::WebEditCommandProxy *> > { struct WebEditCommandProxy {} **x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_36_1_1; } x36; struct HashSet<WTF::String, WTF::StringHash, WTF::HashTraits<WTF::String> > { struct HashTable<WTF::String, WTF::String, WTF::IdentityExtractor, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> > { struct String {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_37_1_1; } x37; struct RefPtr<WebKit::WebPopupMenuProxy> { struct WebPopupMenuProxy {} *x_38_1_1; } x38; struct RefPtr<WebKit::WebOpenPanelResultListenerProxy> { struct WebOpenPanelResultListenerProxy {} *x_39_1_1; } x39; struct GeolocationPermissionRequestManagerProxy { struct HashMap<unsigned long long, WTF::RefPtr<WebKit::GeolocationPermissionRequestProxy>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RefPtr<WebKit::GeolocationPermissionRequestProxy> > > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::GeolocationPermissionRequestProxy> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::GeolocationPermissionRequestProxy> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RefPtr<WebKit::GeolocationPermissionRequestProxy>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RefPtr<WebKit::GeolocationPermissionRequestProxy> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::GeolocationPermissionRequestProxy> > {} *x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_1_2_1; } x_40_1_1; struct WebPageProxy {} *x_40_1_2; } x40; struct NotificationPermissionRequestManagerProxy { struct HashMap<unsigned long long, WTF::RefPtr<WebKit::NotificationPermissionRequest>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RefPtr<WebKit::NotificationPermissionRequest> > > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::NotificationPermissionRequest> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::NotificationPermissionRequest> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RefPtr<WebKit::NotificationPermissionRequest>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RefPtr<WebKit::NotificationPermissionRequest> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::NotificationPermissionRequest> > {} *x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_1_2_1; } x_41_1_1; struct WebPageProxy {} *x_41_1_2; } x41; unsigned int x42; boolx43; struct unique_ptr<WebKit::ProcessThrottler::ForegroundActivityToken, std::__1::default_delete<WebKit::ProcessThrottler::ForegroundActivityToken> > { struct __compressed_pair<WebKit::ProcessThrottler::ForegroundActivityToken *, std::__1::default_delete<WebKit::ProcessThrottler::ForegroundActivityToken> > { struct ForegroundActivityToken {} *x_1_2_1; } x_44_1_1; } x44; struct Ref<WebKit::WebBackForwardList> { struct WebBackForwardList {} *x_45_1_1; } x45; boolx46; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_47_1_1; } x47; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_48_1_1; } x48; int x49; struct EditorState { boolx_50_1_1; boolx_50_1_2; boolx_50_1_3; boolx_50_1_4; boolx_50_1_5; boolx_50_1_6; boolx_50_1_7; boolx_50_1_8; boolx_50_1_9; boolx_50_1_10; int x_50_1_11; int x_50_1_12; int x_50_1_13; struct IntRect { struct IntPoint { int x_1_3_1; int x_1_3_2; } x_14_2_1; struct IntSize { int x_2_3_1; int x_2_3_2; } x_14_2_2; } x_50_1_14; struct IntRect { struct IntPoint { int x_1_3_1; int x_1_3_2; } x_15_2_1; struct IntSize { int x_2_3_1; int x_2_3_2; } x_15_2_2; } x_50_1_15; struct Vector<WebCore::SelectionRect, 0, WTF::CrashOnOverflow> { struct SelectionRect {} *x_16_2_1; unsigned int x_16_2_2; unsigned int x_16_2_3; } x_50_1_16; unsigned long long x_50_1_17; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_18_2_1; } x_50_1_18; struct IntRect { struct IntPoint { int x_1_3_1; int x_1_3_2; } x_19_2_1; struct IntSize { int x_2_3_1; int x_2_3_2; } x_19_2_2; } x_50_1_19; struct IntRect { struct IntPoint { int x_1_3_1; int x_1_3_2; } x_20_2_1; struct IntSize { int x_2_3_1; int x_2_3_2; } x_20_2_2; } x_50_1_20; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_21_2_1; } x_50_1_21; unsigned int x_50_1_22; } x50; double x51; double x52; double x53; float x54; float x55; float x56; int x57; boolx58; boolx59; struct Color { unsigned int x_60_1_1; boolx_60_1_2; } x60; struct Color { unsigned int x_61_1_1; boolx_61_1_2; } x61; boolx62; struct IntSize { int x_63_1_1; int x_63_1_2; } x63; boolx64; int x65; boolx66; double x67; double x68; boolx69; boolx70; boolx71; boolx72; boolx73; boolx74; struct ResourceRequest {} *x75; boolx76; int x77; unsigned long long x78; boolx79; boolx80; int x81; unsigned long long x82; struct Deque<WebKit::NativeWebKeyboardEvent, 0> { unsigned int x_83_1_1; unsigned int x_83_1_2; struct VectorBuffer<WebKit::NativeWebKeyboardEvent, 0> { struct NativeWebKeyboardEvent {} *x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; } x_83_1_3; } x83; struct Deque<WebKit::NativeWebWheelEvent, 0> { unsigned int x_84_1_1; unsigned int x_84_1_2; struct VectorBuffer<WebKit::NativeWebWheelEvent, 0> { struct NativeWebWheelEvent {} *x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; } x_84_1_3; } x84; struct Deque<std::__1::unique_ptr<WTF::Vector<WebKit::NativeWebWheelEvent, 0, WTF::CrashOnOverflow>, std::__1::default_delete<WTF::Vector<WebKit::NativeWebWheelEvent, 0, WTF::CrashOnOverflow> > >, 0> { unsigned int x_85_1_1; unsigned int x_85_1_2; struct VectorBuffer<std::__1::unique_ptr<WTF::Vector<WebKit::NativeWebWheelEvent, 0, WTF::CrashOnOverflow>, std::__1::default_delete<WTF::Vector<WebKit::NativeWebWheelEvent, 0, WTF::CrashOnOverflow> > >, 0> { struct unique_ptr<WTF::Vector<WebKit::NativeWebWheelEvent, 0, WTF::CrashOnOverflow>, std::__1::default_delete<WTF::Vector<WebKit::NativeWebWheelEvent, 0, WTF::CrashOnOverflow> > > {} *x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; } x_85_1_3; } x85; boolx86; struct unique_ptr<WebKit::NativeWebMouseEvent, std::__1::default_delete<WebKit::NativeWebMouseEvent> > { struct __compressed_pair<WebKit::NativeWebMouseEvent *, std::__1::default_delete<WebKit::NativeWebMouseEvent> > { struct NativeWebMouseEvent {} *x_1_2_1; } x_87_1_1; } x87; struct unique_ptr<WebKit::NativeWebMouseEvent, std::__1::default_delete<WebKit::NativeWebMouseEvent> > { struct __compressed_pair<WebKit::NativeWebMouseEvent *, std::__1::default_delete<WebKit::NativeWebMouseEvent> > { struct NativeWebMouseEvent {} *x_1_2_1; } x_88_1_1; } x88; boolx89; unsigned long long x90; struct Ref<API::Session> { struct Session {} *x_91_1_1; } x91; boolx92; boolx93; boolx94; boolx95; long long x96; boolx97; unsigned int x98; boolx99; struct PageLoadState { struct Vector<WebKit::PageLoadState::Observer *, 0, WTF::CrashOnOverflow> { struct Observer {} **x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; } x_100_1_1; struct WebPageProxy {} *x_100_1_2; struct Data { int x_3_2_1; boolx_3_2_2; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_3_3_1; } x_3_2_3; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_4_3_1; } x_3_2_4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_5_3_1; } x_3_2_5; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_6_3_1; } x_3_2_6; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_7_3_1; } x_3_2_7; boolx_3_2_8; boolx_3_2_9; double x_3_2_10; boolx_3_2_11; } x_100_1_3; struct Data { int x_4_2_1; boolx_4_2_2; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_3_3_1; } x_4_2_3; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_4_3_1; } x_4_2_4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_5_3_1; } x_4_2_5; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_6_3_1; } x_4_2_6; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_7_3_1; } x_4_2_7; boolx_4_2_8; boolx_4_2_9; double x_4_2_10; boolx_4_2_11; } x_100_1_4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_5_2_1; } x_100_1_5; boolx_100_1_6; unsigned int x_100_1_7; } x100; boolx101; boolx102; boolx103; boolx104; boolx105; boolx106; boolx107; boolx108; boolx109; boolx110; boolx111; boolx112; boolx113; boolx114; boolx115; boolx116; boolx117; boolx118; unsigned int x119; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_120_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_120_1_2; } x120; unsigned long long x121; boolx122; boolx123; boolx124; struct IntSize { int x_125_1_1; int x_125_1_2; } x125; float x126; boolx127; boolx128; struct HashMap<WTF::String, WTF::String, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> > { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::String>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::String> >, WTF::StringHash, WTF::HashMap<WTF::String, WTF::String, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { struct KeyValuePair<WTF::String, WTF::String> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_129_1_1; } x129; struct unique_ptr<WebCore::RunLoopObserver, std::__1::default_delete<WebCore::RunLoopObserver> > { struct __compressed_pair<WebCore::RunLoopObserver *, std::__1::default_delete<WebCore::RunLoopObserver> > { struct RunLoopObserver {} *x_1_2_1; } x_130_1_1; } x130; int x131; unsigned long long x132; struct HashMap<WTF::String, WebKit::WebPreferencesStore::Value, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WebKit::WebPreferencesStore::Value> > { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WebKit::WebPreferencesStore::Value>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WebKit::WebPreferencesStore::Value> >, WTF::StringHash, WTF::HashMap<WTF::String, WebKit::WebPreferencesStore::Value, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WebKit::WebPreferencesStore::Value> >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { struct KeyValuePair<WTF::String, WebKit::WebPreferencesStore::Value> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_133_1_1; } x133; unsigned int x134; boolx135; }*)arg1;
- (id)init;
- (Class)providerForMIMEType:(const struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; }*)arg1;
- (void)registerProvider:(Class)arg1 forMIMEType:(const struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; }*)arg2;
- (void)removePage:(struct WebPageProxy { int (**x1)(); id x2; int (**x3)(); int (**x4)(); int (**x5)(); struct PageClient {} *x6; struct unique_ptr<API::LoaderClient, std::__1::default_delete<API::LoaderClient> > { struct __compressed_pair<API::LoaderClient *, std::__1::default_delete<API::LoaderClient> > { struct LoaderClient {} *x_1_2_1; } x_7_1_1; } x7; struct unique_ptr<API::PolicyClient, std::__1::default_delete<API::PolicyClient> > { struct __compressed_pair<API::PolicyClient *, std::__1::default_delete<API::PolicyClient> > { struct PolicyClient {} *x_1_2_1; } x_8_1_1; } x8; struct unique_ptr<API::FormClient, std::__1::default_delete<API::FormClient> > { struct __compressed_pair<API::FormClient *, std::__1::default_delete<API::FormClient> > { struct FormClient {} *x_1_2_1; } x_9_1_1; } x9; struct unique_ptr<API::UIClient, std::__1::default_delete<API::UIClient> > { struct __compressed_pair<API::UIClient *, std::__1::default_delete<API::UIClient> > { struct UIClient {} *x_1_2_1; } x_10_1_1; } x10; struct unique_ptr<API::FindClient, std::__1::default_delete<API::FindClient> > { struct __compressed_pair<API::FindClient *, std::__1::default_delete<API::FindClient> > { struct FindClient {} *x_1_2_1; } x_11_1_1; } x11; struct WebFindMatchesClient { struct WKPageFindMatchesClientV0 { struct WKPageFindMatchesClientBase { int x_1_3_1; void *x_1_3_2; } x_1_2_1; int (*x_1_2_2)(); int (*x_1_2_3)(); } x_12_1_1; } x12; struct unique_ptr<WebKit::DrawingAreaProxy, std::__1::default_delete<WebKit::DrawingAreaProxy> > { struct __compressed_pair<WebKit::DrawingAreaProxy *, std::__1::default_delete<WebKit::DrawingAreaProxy> > { struct DrawingAreaProxy {} *x_1_2_1; } x_13_1_1; } x13; struct unique_ptr<WebKit::RemoteScrollingCoordinatorProxy, std::__1::default_delete<WebKit::RemoteScrollingCoordinatorProxy> > { struct __compressed_pair<WebKit::RemoteScrollingCoordinatorProxy *, std::__1::default_delete<WebKit::RemoteScrollingCoordinatorProxy> > { struct RemoteScrollingCoordinatorProxy {} *x_1_2_1; } x_14_1_1; } x14; struct Ref<WebKit::WebProcessProxy> { struct WebProcessProxy {} *x_15_1_1; } x15; struct Ref<WebKit::WebPageGroup> { struct WebPageGroup {} *x_16_1_1; } x16; struct Ref<WebKit::WebPreferences> { struct WebPreferences {} *x_17_1_1; } x17; struct RefPtr<WebKit::WebUserContentControllerProxy> { struct WebUserContentControllerProxy {} *x_18_1_1; } x18; struct Ref<WebKit::VisitedLinkProvider> { struct VisitedLinkProvider {} *x_19_1_1; } x19; struct RefPtr<WebKit::WebFrameProxy> { struct WebFrameProxy {} *x_20_1_1; } x20; struct RefPtr<WebKit::WebFrameProxy> { struct WebFrameProxy {} *x_21_1_1; } x21; struct RefPtr<WebKit::WebFrameProxy> { struct WebFrameProxy {} *x_22_1_1; } x22; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_23_1_1; } x23; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_24_1_1; } x24; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_25_1_1; } x25; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_26_1_1; } x26; struct RefPtr<WebKit::WebInspectorProxy> { struct WebInspectorProxy {} *x_27_1_1; } x27; struct RefPtr<WebKit::WebVideoFullscreenManagerProxy> { struct WebVideoFullscreenManagerProxy {} *x_28_1_1; } x28; struct VisibleContentRectUpdateInfo { struct FloatRect { struct FloatPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct FloatSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_29_1_1; struct FloatRect { struct FloatPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct FloatSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_29_1_2; struct FloatRect { struct FloatPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct FloatSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_29_1_3; struct FloatRect { struct FloatPoint { float x_1_3_1; float x_1_3_2; } x_4_2_1; struct FloatSize { float x_2_3_1; float x_2_3_2; } x_4_2_2; } x_29_1_4; double x_29_1_5; boolx_29_1_6; boolx_29_1_7; double x_29_1_8; double x_29_1_9; double x_29_1_10; double x_29_1_11; unsigned long long x_29_1_12; } x29; int x30; boolx31; boolx32; unsigned long long x33; struct CallbackMap { struct HashMap<unsigned long long, WTF::RefPtr<WebKit::CallbackBase>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RefPtr<WebKit::CallbackBase> > > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::CallbackBase> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::CallbackBase> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RefPtr<WebKit::CallbackBase>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RefPtr<WebKit::CallbackBase> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::CallbackBase> > {} *x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_1_2_1; } x_34_1_1; } x34; struct HashSet<unsigned long long, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long> > { struct HashTable<unsigned long long, unsigned long long, WTF::IdentityExtractor, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<unsigned long long> > { unsigned long long *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_35_1_1; } x35; struct HashSet<WebKit::WebEditCommandProxy *, WTF::PtrHash<WebKit::WebEditCommandProxy *>, WTF::HashTraits<WebKit::WebEditCommandProxy *> > { struct HashTable<WebKit::WebEditCommandProxy *, WebKit::WebEditCommandProxy *, WTF::IdentityExtractor, WTF::PtrHash<WebKit::WebEditCommandProxy *>, WTF::HashTraits<WebKit::WebEditCommandProxy *>, WTF::HashTraits<WebKit::WebEditCommandProxy *> > { struct WebEditCommandProxy {} **x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_36_1_1; } x36; struct HashSet<WTF::String, WTF::StringHash, WTF::HashTraits<WTF::String> > { struct HashTable<WTF::String, WTF::String, WTF::IdentityExtractor, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> > { struct String {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_37_1_1; } x37; struct RefPtr<WebKit::WebPopupMenuProxy> { struct WebPopupMenuProxy {} *x_38_1_1; } x38; struct RefPtr<WebKit::WebOpenPanelResultListenerProxy> { struct WebOpenPanelResultListenerProxy {} *x_39_1_1; } x39; struct GeolocationPermissionRequestManagerProxy { struct HashMap<unsigned long long, WTF::RefPtr<WebKit::GeolocationPermissionRequestProxy>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RefPtr<WebKit::GeolocationPermissionRequestProxy> > > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::GeolocationPermissionRequestProxy> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::GeolocationPermissionRequestProxy> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RefPtr<WebKit::GeolocationPermissionRequestProxy>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RefPtr<WebKit::GeolocationPermissionRequestProxy> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::GeolocationPermissionRequestProxy> > {} *x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_1_2_1; } x_40_1_1; struct WebPageProxy {} *x_40_1_2; } x40; struct NotificationPermissionRequestManagerProxy { struct HashMap<unsigned long long, WTF::RefPtr<WebKit::NotificationPermissionRequest>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RefPtr<WebKit::NotificationPermissionRequest> > > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::NotificationPermissionRequest> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::NotificationPermissionRequest> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RefPtr<WebKit::NotificationPermissionRequest>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RefPtr<WebKit::NotificationPermissionRequest> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::NotificationPermissionRequest> > {} *x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_1_2_1; } x_41_1_1; struct WebPageProxy {} *x_41_1_2; } x41; unsigned int x42; boolx43; struct unique_ptr<WebKit::ProcessThrottler::ForegroundActivityToken, std::__1::default_delete<WebKit::ProcessThrottler::ForegroundActivityToken> > { struct __compressed_pair<WebKit::ProcessThrottler::ForegroundActivityToken *, std::__1::default_delete<WebKit::ProcessThrottler::ForegroundActivityToken> > { struct ForegroundActivityToken {} *x_1_2_1; } x_44_1_1; } x44; struct Ref<WebKit::WebBackForwardList> { struct WebBackForwardList {} *x_45_1_1; } x45; boolx46; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_47_1_1; } x47; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_48_1_1; } x48; int x49; struct EditorState { boolx_50_1_1; boolx_50_1_2; boolx_50_1_3; boolx_50_1_4; boolx_50_1_5; boolx_50_1_6; boolx_50_1_7; boolx_50_1_8; boolx_50_1_9; boolx_50_1_10; int x_50_1_11; int x_50_1_12; int x_50_1_13; struct IntRect { struct IntPoint { int x_1_3_1; int x_1_3_2; } x_14_2_1; struct IntSize { int x_2_3_1; int x_2_3_2; } x_14_2_2; } x_50_1_14; struct IntRect { struct IntPoint { int x_1_3_1; int x_1_3_2; } x_15_2_1; struct IntSize { int x_2_3_1; int x_2_3_2; } x_15_2_2; } x_50_1_15; struct Vector<WebCore::SelectionRect, 0, WTF::CrashOnOverflow> { struct SelectionRect {} *x_16_2_1; unsigned int x_16_2_2; unsigned int x_16_2_3; } x_50_1_16; unsigned long long x_50_1_17; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_18_2_1; } x_50_1_18; struct IntRect { struct IntPoint { int x_1_3_1; int x_1_3_2; } x_19_2_1; struct IntSize { int x_2_3_1; int x_2_3_2; } x_19_2_2; } x_50_1_19; struct IntRect { struct IntPoint { int x_1_3_1; int x_1_3_2; } x_20_2_1; struct IntSize { int x_2_3_1; int x_2_3_2; } x_20_2_2; } x_50_1_20; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_21_2_1; } x_50_1_21; unsigned int x_50_1_22; } x50; double x51; double x52; double x53; float x54; float x55; float x56; int x57; boolx58; boolx59; struct Color { unsigned int x_60_1_1; boolx_60_1_2; } x60; struct Color { unsigned int x_61_1_1; boolx_61_1_2; } x61; boolx62; struct IntSize { int x_63_1_1; int x_63_1_2; } x63; boolx64; int x65; boolx66; double x67; double x68; boolx69; boolx70; boolx71; boolx72; boolx73; boolx74; struct ResourceRequest {} *x75; boolx76; int x77; unsigned long long x78; boolx79; boolx80; int x81; unsigned long long x82; struct Deque<WebKit::NativeWebKeyboardEvent, 0> { unsigned int x_83_1_1; unsigned int x_83_1_2; struct VectorBuffer<WebKit::NativeWebKeyboardEvent, 0> { struct NativeWebKeyboardEvent {} *x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; } x_83_1_3; } x83; struct Deque<WebKit::NativeWebWheelEvent, 0> { unsigned int x_84_1_1; unsigned int x_84_1_2; struct VectorBuffer<WebKit::NativeWebWheelEvent, 0> { struct NativeWebWheelEvent {} *x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; } x_84_1_3; } x84; struct Deque<std::__1::unique_ptr<WTF::Vector<WebKit::NativeWebWheelEvent, 0, WTF::CrashOnOverflow>, std::__1::default_delete<WTF::Vector<WebKit::NativeWebWheelEvent, 0, WTF::CrashOnOverflow> > >, 0> { unsigned int x_85_1_1; unsigned int x_85_1_2; struct VectorBuffer<std::__1::unique_ptr<WTF::Vector<WebKit::NativeWebWheelEvent, 0, WTF::CrashOnOverflow>, std::__1::default_delete<WTF::Vector<WebKit::NativeWebWheelEvent, 0, WTF::CrashOnOverflow> > >, 0> { struct unique_ptr<WTF::Vector<WebKit::NativeWebWheelEvent, 0, WTF::CrashOnOverflow>, std::__1::default_delete<WTF::Vector<WebKit::NativeWebWheelEvent, 0, WTF::CrashOnOverflow> > > {} *x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; } x_85_1_3; } x85; boolx86; struct unique_ptr<WebKit::NativeWebMouseEvent, std::__1::default_delete<WebKit::NativeWebMouseEvent> > { struct __compressed_pair<WebKit::NativeWebMouseEvent *, std::__1::default_delete<WebKit::NativeWebMouseEvent> > { struct NativeWebMouseEvent {} *x_1_2_1; } x_87_1_1; } x87; struct unique_ptr<WebKit::NativeWebMouseEvent, std::__1::default_delete<WebKit::NativeWebMouseEvent> > { struct __compressed_pair<WebKit::NativeWebMouseEvent *, std::__1::default_delete<WebKit::NativeWebMouseEvent> > { struct NativeWebMouseEvent {} *x_1_2_1; } x_88_1_1; } x88; boolx89; unsigned long long x90; struct Ref<API::Session> { struct Session {} *x_91_1_1; } x91; boolx92; boolx93; boolx94; boolx95; long long x96; boolx97; unsigned int x98; boolx99; struct PageLoadState { struct Vector<WebKit::PageLoadState::Observer *, 0, WTF::CrashOnOverflow> { struct Observer {} **x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; } x_100_1_1; struct WebPageProxy {} *x_100_1_2; struct Data { int x_3_2_1; boolx_3_2_2; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_3_3_1; } x_3_2_3; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_4_3_1; } x_3_2_4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_5_3_1; } x_3_2_5; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_6_3_1; } x_3_2_6; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_7_3_1; } x_3_2_7; boolx_3_2_8; boolx_3_2_9; double x_3_2_10; boolx_3_2_11; } x_100_1_3; struct Data { int x_4_2_1; boolx_4_2_2; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_3_3_1; } x_4_2_3; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_4_3_1; } x_4_2_4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_5_3_1; } x_4_2_5; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_6_3_1; } x_4_2_6; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_7_3_1; } x_4_2_7; boolx_4_2_8; boolx_4_2_9; double x_4_2_10; boolx_4_2_11; } x_100_1_4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_5_2_1; } x_100_1_5; boolx_100_1_6; unsigned int x_100_1_7; } x100; boolx101; boolx102; boolx103; boolx104; boolx105; boolx106; boolx107; boolx108; boolx109; boolx110; boolx111; boolx112; boolx113; boolx114; boolx115; boolx116; boolx117; boolx118; unsigned int x119; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_120_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_120_1_2; } x120; unsigned long long x121; boolx122; boolx123; boolx124; struct IntSize { int x_125_1_1; int x_125_1_2; } x125; float x126; boolx127; boolx128; struct HashMap<WTF::String, WTF::String, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> > { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::String>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::String> >, WTF::StringHash, WTF::HashMap<WTF::String, WTF::String, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { struct KeyValuePair<WTF::String, WTF::String> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_129_1_1; } x129; struct unique_ptr<WebCore::RunLoopObserver, std::__1::default_delete<WebCore::RunLoopObserver> > { struct __compressed_pair<WebCore::RunLoopObserver *, std::__1::default_delete<WebCore::RunLoopObserver> > { struct RunLoopObserver {} *x_1_2_1; } x_130_1_1; } x130; int x131; unsigned long long x132; struct HashMap<WTF::String, WebKit::WebPreferencesStore::Value, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WebKit::WebPreferencesStore::Value> > { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WebKit::WebPreferencesStore::Value>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WebKit::WebPreferencesStore::Value> >, WTF::StringHash, WTF::HashMap<WTF::String, WebKit::WebPreferencesStore::Value, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WebKit::WebPreferencesStore::Value> >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { struct KeyValuePair<WTF::String, WebKit::WebPreferencesStore::Value> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_133_1_1; } x133; unsigned int x134; boolx135; }*)arg1;

@end
