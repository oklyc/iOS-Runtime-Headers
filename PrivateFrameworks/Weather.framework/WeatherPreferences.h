/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@class <SynchronizedDefaultsDelegate>, NSArray, NSString;

@interface WeatherPreferences : NSObject <NSURLConnectionDelegate> {
    NSString *_UUID;
    BOOL _isCelsius;
    NSArray *_lastUbiquitousWrittenDefaults;
    BOOL _serviceDebugging;
    NSString *_serviceHost;
    <SynchronizedDefaultsDelegate> *_syncDelegate;
    NSString *_twcURLString;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property <SynchronizedDefaultsDelegate> * syncDelegate;
@property(copy) NSString * twcURLString;
@property(copy) NSString * yahooWeatherURLString;

+ (void)clearSharedPreferences;
+ (id)serviceDebuggingPath;
+ (id)sharedPreferences;

- (id)UUID;
- (BOOL)_areDefaultCities:(id)arg1;
- (id)_cacheDirectoryPath;
- (id)_cityArrayToCloudCityArray:(id)arg1;
- (void)_clearCachedObjects;
- (id)_cloudCitiesFromLegacyCloudCities:(id)arg1;
- (id)_cloudCityFromALCity:(id)arg1 name:(id)arg2;
- (id)_defaultCities;
- (BOOL)_defaultsAreValid;
- (BOOL)_defaultsCurrent;
- (BOOL)_legacyCloudCity:(id)arg1 isEqualToALCity:(id)arg2;
- (id)_ppt_addFakeTestCities;
- (void)_saveUbiquitousDefaults:(id)arg1;
- (void)_setLastUbiquitousWrittenDefaults:(id)arg1 isCloudCityArray:(BOOL)arg2;
- (void)_syncToCloudIfNotDefaultCities:(id)arg1;
- (void)_synchronizedDefaultsDidChange:(id)arg1;
- (id)_translatedLegacyCloudCities;
- (id)cityFromPreferencesDictionary:(id)arg1;
- (id)combineCloudCities:(id)arg1 withExisting:(id)arg2 byAppending:(BOOL)arg3;
- (void)dealloc;
- (id)init;
- (BOOL)isCelsius;
- (BOOL)isLocalWeatherEnabled;
- (int)loadActiveCity;
- (id)loadSavedCities;
- (id)loadSavedCityAtIndex:(int)arg1;
- (id)localWeatherCity;
- (id)preferencesDictionaryForCity:(id)arg1;
- (id)readDefaultValueForKey:(id)arg1;
- (BOOL)readTemperatureUnits;
- (void)registerTemperatureUnits;
- (void)resetLocale;
- (void)saveToDiskWithCities:(id)arg1 activeCity:(unsigned int)arg2;
- (void)saveToDiskWithCities:(id)arg1;
- (void)saveToDiskWithCity:(id)arg1 forActiveIndex:(unsigned int)arg2;
- (void)saveToDiskWithLocalWeatherCity:(id)arg1;
- (void)saveToUbiquitousStore;
- (BOOL)serviceDebugging;
- (id)serviceHost;
- (void)setActiveCity:(unsigned int)arg1;
- (void)setCelsius:(BOOL)arg1;
- (void)setLocalWeatherEnabled:(BOOL)arg1;
- (void)setSyncDelegate:(id)arg1;
- (void)setTwcURLString:(id)arg1;
- (void)setYahooWeatherURLString:(id)arg1;
- (id)syncDelegate;
- (void)synchronizeStateToDisk;
- (id)twcLogoURL;
- (id)twcURLString;
- (void)writeDefaultValue:(id)arg1 forKey:(id)arg2;
- (id)yahooWeatherURLString;

@end
