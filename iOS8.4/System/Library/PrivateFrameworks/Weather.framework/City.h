/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CityUpdaterDelegate;
#import <Weather/Weather-Structs.h>
@class NSString, NSMutableArray, NSDate, CLLocation, MKSearchCompletion, NSTimer;

@interface City : NSObject {

	id<CityUpdaterDelegate> _delegate;
	NSString* _updateTimeString;
	NSMutableArray* _dayForecasts;
	NSMutableArray* _hourlyForecasts;
	BOOL _autoUpdate;
	BOOL _isDay;
	BOOL _isLocalWeatherCity;
	BOOL _isHourlyDataCelsius;
	BOOL _dataCelsius;
	BOOL _isUpdating;
	BOOL _isRequestedByFrameworkClient;
	BOOL _lockedForDemoMode;
	float _windChill;
	float _windDirection;
	float _windSpeed;
	float _humidity;
	float _visibility;
	float _pressure;
	float _dewPoint;
	float _feelsLike;
	float _heatIndex;
	int _lastUpdateStatus;
	int _updateInterval;
	NSString* _temperature;
	NSDate* _updateTime;
	unsigned long long _conditionCode;
	NSString* _name;
	NSString* _locationID;
	NSString* _state;
	unsigned long long _observationTime;
	unsigned long long _sunsetTime;
	unsigned long long _sunriseTime;
	unsigned long long _moonPhase;
	unsigned long long _uvIndex;
	double _precipitationPast24Hours;
	NSString* _link;
	NSString* _deeplink;
	CLLocation* _location;
	long long _secondsFromGMT;
	unsigned long long _lastUpdateDetail;
	long long _pressureRising;
	NSString* _fullName;
	MKSearchCompletion* _searchCompletion;
	NSTimer* _autoUpdateTimer;

}

@property (assign,nonatomic) id<CityUpdaterDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isLocalWeatherCity;                                    //@synthesize isLocalWeatherCity=_isLocalWeatherCity - In the implementation block
@property (nonatomic,copy) NSString * woeid; 
@property (nonatomic,copy) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * locationID;                                        //@synthesize locationID=_locationID - In the implementation block
@property (nonatomic,copy) NSString * state;                                             //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * temperature;                                       //@synthesize temperature=_temperature - In the implementation block
@property (assign,nonatomic) unsigned long long conditionCode;                           //@synthesize conditionCode=_conditionCode - In the implementation block
@property (assign,nonatomic) unsigned long long observationTime;                         //@synthesize observationTime=_observationTime - In the implementation block
@property (assign,nonatomic) unsigned long long sunsetTime;                              //@synthesize sunsetTime=_sunsetTime - In the implementation block
@property (assign,nonatomic) unsigned long long sunriseTime;                             //@synthesize sunriseTime=_sunriseTime - In the implementation block
@property (assign,nonatomic) unsigned long long moonPhase;                               //@synthesize moonPhase=_moonPhase - In the implementation block
@property (assign,setter=setUVIndex:,nonatomic) unsigned long long uvIndex;              //@synthesize uvIndex=_uvIndex - In the implementation block
@property (assign,nonatomic) double precipitationPast24Hours;                            //@synthesize precipitationPast24Hours=_precipitationPast24Hours - In the implementation block
@property (nonatomic,copy) NSString * link;                                              //@synthesize link=_link - In the implementation block
@property (nonatomic,copy) NSString * deeplink;                                          //@synthesize deeplink=_deeplink - In the implementation block
@property (nonatomic,retain) CLLocation * location;                                      //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) float longitude; 
@property (assign,nonatomic) float latitude; 
@property (assign,nonatomic) long long secondsFromGMT;                                   //@synthesize secondsFromGMT=_secondsFromGMT - In the implementation block
@property (assign,nonatomic) BOOL isHourlyDataCelsius;                                   //@synthesize isHourlyDataCelsius=_isHourlyDataCelsius - In the implementation block
@property (assign,nonatomic) unsigned long long lastUpdateDetail;                        //@synthesize lastUpdateDetail=_lastUpdateDetail - In the implementation block
@property (nonatomic,retain) NSDate * updateTime;                                        //@synthesize updateTime=_updateTime - In the implementation block
@property (assign,getter=isDataCelsius,nonatomic) BOOL dataCelsius;                      //@synthesize dataCelsius=_dataCelsius - In the implementation block
@property (assign,nonatomic) float windChill;                                            //@synthesize windChill=_windChill - In the implementation block
@property (assign,nonatomic) float windDirection;                                        //@synthesize windDirection=_windDirection - In the implementation block
@property (assign,nonatomic) float windSpeed;                                            //@synthesize windSpeed=_windSpeed - In the implementation block
@property (assign,nonatomic) float humidity;                                             //@synthesize humidity=_humidity - In the implementation block
@property (assign,nonatomic) float visibility;                                           //@synthesize visibility=_visibility - In the implementation block
@property (assign,nonatomic) float pressure;                                             //@synthesize pressure=_pressure - In the implementation block
@property (assign,nonatomic) long long pressureRising;                                   //@synthesize pressureRising=_pressureRising - In the implementation block
@property (assign,nonatomic) float dewPoint;                                             //@synthesize dewPoint=_dewPoint - In the implementation block
@property (assign,nonatomic) float feelsLike;                                            //@synthesize feelsLike=_feelsLike - In the implementation block
@property (assign,nonatomic) float heatIndex;                                            //@synthesize heatIndex=_heatIndex - In the implementation block
@property (assign,nonatomic) BOOL isDay; 
@property (assign,nonatomic) int lastUpdateStatus;                                       //@synthesize lastUpdateStatus=_lastUpdateStatus - In the implementation block
@property (assign,nonatomic) BOOL isUpdating;                                            //@synthesize isUpdating=_isUpdating - In the implementation block
@property (assign,nonatomic) BOOL isRequestedByFrameworkClient;                          //@synthesize isRequestedByFrameworkClient=_isRequestedByFrameworkClient - In the implementation block
@property (assign,nonatomic) BOOL lockedForDemoMode;                                     //@synthesize lockedForDemoMode=_lockedForDemoMode - In the implementation block
@property (nonatomic,copy) NSString * fullName;                                          //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,retain) MKSearchCompletion * searchCompletion;                      //@synthesize searchCompletion=_searchCompletion - In the implementation block
@property (assign,nonatomic) int updateInterval;                                         //@synthesize updateInterval=_updateInterval - In the implementation block
@property (nonatomic,retain) NSTimer * autoUpdateTimer;                                  //@synthesize autoUpdateTimer=_autoUpdateTimer - In the implementation block
+(id)descriptionForWeatherUpdateDetail:(unsigned long long)arg1 ;
-(float)pressure;
-(BOOL)isUpdating;
-(void)dealloc;
-(void)setDelegate:(id<CityUpdaterDelegate>)arg1 ;
-(id)init;
-(id)description;
-(id<CityUpdaterDelegate>)delegate;
-(NSString *)state;
-(void)setState:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(int)updateInterval;
-(void)setUpdateInterval:(int)arg1 ;
-(void)update;
-(CLLocation *)location;
-(id)displayName;
-(void)setLink:(NSString *)arg1 ;
-(NSString *)link;
-(id)updateTimeString;
-(void)setLatitude:(float)arg1 ;
-(void)setLongitude:(float)arg1 ;
-(float)latitude;
-(float)longitude;
-(void)setUpdateTime:(NSDate *)arg1 ;
-(NSString *)locationID;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSString *)fullName;
-(void)setFullName:(NSString *)arg1 ;
-(unsigned long long)conditionCode;
-(void)setConditionCode:(unsigned long long)arg1 ;
-(float)dewPoint;
-(void)setDewPoint:(float)arg1 ;
-(float)heatIndex;
-(void)setHeatIndex:(float)arg1 ;
-(unsigned long long)moonPhase;
-(void)setMoonPhase:(unsigned long long)arg1 ;
-(NSString *)temperature;
-(void)setTemperature:(NSString *)arg1 ;
-(float)windChill;
-(void)setWindChill:(float)arg1 ;
-(float)windSpeed;
-(void)setWindSpeed:(float)arg1 ;
-(id)hourlyForecasts;
-(void)setHourlyForecasts:(id)arg1 ;
-(float)windDirection;
-(void)setWindDirection:(float)arg1 ;
-(NSDate *)updateTime;
-(long long)secondsFromGMT;
-(void)_clearAutoUpdateTimer;
-(BOOL)isLocalWeatherCity;
-(float)feelsLike;
-(id)windDirectionAsString:(double)arg1 ;
-(float)humidity;
-(unsigned long long)uvIndex;
-(int)weatherDataAge;
-(long long)timeDigit;
-(void)setIsUpdating:(BOOL)arg1 ;
-(id)dayForecasts;
-(void)setLastUpdateStatus:(int)arg1 ;
-(unsigned long long)lastUpdateDetail;
-(void)setLastUpdateDetail:(unsigned long long)arg1 ;
-(void)discardDataIfNeeded;
-(BOOL)_isUpdating;
-(NSString *)deeplink;
-(void)setDeeplink:(NSString *)arg1 ;
-(void)setSecondsFromGMT:(long long)arg1 ;
-(void)setDayForecasts:(id)arg1 ;
-(unsigned long long)observationTime;
-(void)setObservationTime:(unsigned long long)arg1 ;
-(unsigned long long)sunsetTime;
-(void)setSunsetTime:(unsigned long long)arg1 ;
-(unsigned long long)sunriseTime;
-(void)setSunriseTime:(unsigned long long)arg1 ;
-(BOOL)isDataCelsius;
-(void)setDataCelsius:(BOOL)arg1 ;
-(int)lastUpdateStatus;
-(void)setLocationID:(NSString *)arg1 ;
-(void)setHumidity:(float)arg1 ;
-(void)setFeelsLike:(float)arg1 ;
-(double)distanceToLatitude:(double)arg1 longitude:(double)arg2 ;
-(double)distanceToLocation:(id)arg1 ;
-(id)naturalLanguageDescriptionWithDescribedCondition:(out long long*)arg1 ;
-(BOOL)isDay;
-(long long)primaryConditionForRange:(NSRange)arg1 ;
-(long long)locationOfTime:(long long)arg1 ;
-(void)associateWithDelegate:(id)arg1 ;
-(void)disassociateWithDelegate:(id)arg1 ;
-(void)setAutoUpdate:(BOOL)arg1 ;
-(void)setIsDay:(BOOL)arg1 ;
-(void)localWeatherDidBeginUpdate;
-(void)clearForecasts;
-(void)addDayForecast:(id)arg1 ;
-(void)addHourlyForecast:(id)arg1 ;
-(void)finishedUpdating:(int)arg1 statusDetail:(unsigned long long)arg2 ;
-(BOOL)isUpdatingOrNoData;
-(id)cityAndState;
-(NSString *)woeid;
-(void)setWoeid:(NSString *)arg1 ;
-(BOOL)populateWithDataFromCity:(id)arg1 ;
-(BOOL)containsLatitude:(double)arg1 longitude:(double)arg2 ;
-(id)naturalLanguageDescription;
-(int)precipitationForecast;
-(void)_generateLocalizableStrings;
-(void)setIsLocalWeatherCity:(BOOL)arg1 ;
-(void)setUVIndex:(unsigned long long)arg1 ;
-(double)precipitationPast24Hours;
-(void)setPrecipitationPast24Hours:(double)arg1 ;
-(BOOL)isHourlyDataCelsius;
-(void)setIsHourlyDataCelsius:(BOOL)arg1 ;
-(void)setPressure:(float)arg1 ;
-(long long)pressureRising;
-(void)setPressureRising:(long long)arg1 ;
-(BOOL)isRequestedByFrameworkClient;
-(void)setIsRequestedByFrameworkClient:(BOOL)arg1 ;
-(BOOL)lockedForDemoMode;
-(void)setLockedForDemoMode:(BOOL)arg1 ;
-(MKSearchCompletion *)searchCompletion;
-(void)setSearchCompletion:(MKSearchCompletion *)arg1 ;
-(NSTimer *)autoUpdateTimer;
-(void)setAutoUpdateTimer:(NSTimer *)arg1 ;
-(float)visibility;
-(void)setVisibility:(float)arg1 ;
@end
