/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:55 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <DataAccess/DataAccess-Structs.h>
@class ACAccount, DAStatusReport, NSMapTable, NSString, DATaskManager, DATrustHandler, NSArray, NSMutableArray, NSObject, NSMutableDictionary, NSData, NSURL, NSSet;

@interface DAAccount : NSObject {

	ACAccount* _backingAccountInfo;
	char _hasInitted;
	char _shouldUseOpportunisticSockets;
	char _wasUserInitiated;
	DAStatusReport* _statusReport;
	NSMapTable* _consumers;
	CFURLStorageSessionRef _storageSession;
	NSString* _clientToken;
	DATaskManager* _taskManager;
	char _shouldFailAllTasks;
	char _isValidating;
	DATrustHandler* _trustHandler;
	NSArray* _appIdsForPasswordPrompt;
	NSMutableArray* _pendingQueries;
	NSObject*<OS_dispatch_queue> _pendingQueryQueue;
	NSMutableDictionary* _dataclassPropertyURLsByDataclass;
	unsigned long long _lastQueryStartedTime;

}

@property (nonatomic,readonly) NSString * accountID; 
@property (assign,setter=setDAAccountVersion:,nonatomic) int daAccountVersion; 
@property (nonatomic,copy,readonly) NSString * persistentUUID; 
@property (nonatomic,copy) NSString * accountDescription; 
@property (nonatomic,copy) NSString * username; 
@property (nonatomic,copy) NSString * user; 
@property (nonatomic,copy) NSString * host; 
@property (assign,nonatomic) int port; 
@property (nonatomic,copy) NSString * password; 
@property (assign,nonatomic) char useSSL; 
@property (nonatomic,readonly) int enabledDataclassesBitmask; 
@property (nonatomic,readonly) char isChildAccount; 
@property (nonatomic,readonly) ACAccount * backingAccountInfo;                                    //@synthesize backingAccountInfo=_backingAccountInfo - In the implementation block
@property (nonatomic,readonly) DATaskManager * taskManager;                                       //@synthesize taskManager=_taskManager - In the implementation block
@property (nonatomic,readonly) NSString * changeTrackingID; 
@property (nonatomic,retain) DATrustHandler * trustHandler;                                       //@synthesize trustHandler=_trustHandler - In the implementation block
@property (nonatomic,readonly) int keychainAccessibilityType; 
@property (nonatomic,readonly) NSString * scheduleIdentifier; 
@property (nonatomic,retain) NSData * signingIdentityPersistentReference; 
@property (nonatomic,retain) NSData * encryptionIdentityPersistentReference; 
@property (assign,nonatomic) char shouldDoInitialAutodiscovery; 
@property (nonatomic,readonly) char shouldAutodiscoverAccountProperties; 
@property (nonatomic,copy,readonly) NSString * scheme; 
@property (nonatomic,copy) NSURL * principalURL; 
@property (nonatomic,copy) NSString * principalPath; 
@property (nonatomic,copy,readonly) NSString * clientToken; 
@property (nonatomic,copy) NSString * emailAddress; 
@property (nonatomic,copy) NSArray * emailAddresses; 
@property (nonatomic,readonly) NSArray * appIdsForPasswordPrompt;                                 //@synthesize appIdsForPasswordPrompt=_appIdsForPasswordPrompt - In the implementation block
@property (nonatomic,readonly) char shouldFailAllTasks;                                           //@synthesize shouldFailAllTasks=_shouldFailAllTasks - In the implementation block
@property (nonatomic,copy,readonly) NSData * identityPersist; 
@property (assign,nonatomic) char shouldUseOpportunisticSockets;                                  //@synthesize shouldUseOpportunisticSockets=_shouldUseOpportunisticSockets - In the implementation block
@property (assign,nonatomic) char wasUserInitiated;                                               //@synthesize wasUserInitiated=_wasUserInitiated - In the implementation block
@property (assign,nonatomic) char isValidating;                                                   //@synthesize isValidating=_isValidating - In the implementation block
@property (nonatomic,readonly) NSString * userAgentHeader; 
@property (nonatomic,readonly) NSSet * serverComplianceClasses; 
@property (nonatomic,readonly) NSString * serverRoot; 
@property (nonatomic,retain) DAStatusReport * statusReport;                                       //@synthesize statusReport=_statusReport - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingQueries;                                     //@synthesize pendingQueries=_pendingQueries - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> pendingQueryQueue;                      //@synthesize pendingQueryQueue=_pendingQueryQueue - In the implementation block
@property (assign,nonatomic) unsigned long long lastQueryStartedTime;                             //@synthesize lastQueryStartedTime=_lastQueryStartedTime - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dataclassPropertyURLsByDataclass;              //@synthesize dataclassPropertyURLsByDataclass=_dataclassPropertyURLsByDataclass - In the implementation block
+(id)_leafAccountTypes;
+(id)oneshotListOfAccountIDs;
+(void)reacquireClientRestrictions:(id)arg1 ;
+(id)daAccountSubclassWithBackingAccountInfo:(id)arg1 ;
-(char)isCardDAVAccount;
-(char)isBookmarkDAVAccount;
-(void)cancelCalendarAvailabilityRequestWithID:(id)arg1 ;
-(void)cancelCalendarDirectorySearchWithID:(id)arg1 ;
-(void)setEnabled:(char)arg1 forDataclass:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(void)reload;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSString *)scheme;
-(NSString *)host;
-(id)displayName;
-(int)port;
-(id)dataclassProperties;
-(void)shutdown;
-(NSString *)accountID;
-(void)setEmailAddress:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(DAStatusReport *)statusReport;
-(void)tearDown;
-(NSString *)password;
-(char)shouldFailAllTasks;
-(id)additionalHeaderValues;
-(void)setUser:(NSString *)arg1 ;
-(void)setHost:(NSString *)arg1 ;
-(void)setPort:(int)arg1 ;
-(NSString *)user;
-(id)protocolVersion;
-(void)setPassword:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)serverRoot;
-(NSString *)userAgentHeader;
-(NSSet *)serverComplianceClasses;
-(void)clientTokenRequestedByServer;
-(NSString *)clientToken;
-(id)oauthInfoProvider;
-(char)handleCertificateError:(id)arg1 ;
-(void)webLoginRequestedAtURL:(id)arg1 reasonString:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setPrincipalURL:(NSURL *)arg1 ;
-(id)oauth2Token;
-(void)resetStatusReport;
-(void)_setPersistentUUID:(id)arg1 ;
-(void)ingestBackingAccountInfoProperties;
-(int)accountIntPropertyForKey:(id)arg1 ;
-(void)setAccountBoolProperty:(char)arg1 forKey:(id)arg2 ;
-(id)passwordWithExpected:(char)arg1 ;
-(NSMutableDictionary *)dataclassPropertyURLsByDataclass;
-(id)urlFromDataclassPropertiesForDataclass:(id)arg1 ;
-(NSString *)principalPath;
-(void)setPrincipalPath:(NSString *)arg1 ;
-(void)setIsValidating:(char)arg1 ;
-(char)shouldDoInitialAutodiscovery;
-(char)shouldRemoveDBSyncDataOnAccountChange;
-(void)removeDBSyncData;
-(char)monitorFoldersWithIDs:(id)arg1 ;
-(char)_isIdentityManagedByProfile;
-(void)setIdentityCertificatePersistentID:(id)arg1 managedByProfile:(char)arg2 ;
-(void)saveAccountPropertiesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)exceptionsDict;
-(DATrustHandler *)trustHandler;
-(char)resetCertWarnings;
-(void)setStatusReport:(DAStatusReport *)arg1 ;
-(char)wasUserInitiated;
-(int)keychainAccessibilityType;
-(int)daAccountVersion;
-(void)setDAAccountVersion:(int)arg1 ;
-(char)upgradeAccount;
-(NSString *)scheduleIdentifier;
-(char)enabledForAnyDADataclasses:(int)arg1 ;
-(int)enabledDataclassesBitmask;
-(id)spinnerIdentifiers;
-(void)stopMonitoringFolderWithID:(id)arg1 ;
-(id)hostFromDataclassPropertiesForDataclass:(id)arg1 ;
-(char)useSSLFromDataclassPropertiesForDataclass:(id)arg1 ;
-(int)portFromDataclassPropertiesForDataclass:(id)arg1 ;
-(void)checkValidityOnAccountStore:(id)arg1 withConsumer:(id)arg2 ;
-(char)saveModifiedPropertiesOnBackingAccount;
-(void)setShouldDoInitialAutodiscovery:(char)arg1 ;
-(char)shouldAutodiscoverAccountProperties;
-(void)accountDidChangeFromOldAccountInfo:(id)arg1 ;
-(char)monitorFolderWithID:(id)arg1 ;
-(void)stopMonitoringFoldersWithIDs:(id)arg1 ;
-(void)stopMonitoringFolders;
-(void)removeClientCertificateData;
-(id)addUsernameToURL:(id)arg1 ;
-(CFDataRef)exceptionsForDigest:(id)arg1 ;
-(void)setExceptions:(CFDataRef)arg1 forDigest:(id)arg2 ;
-(char)isChildAccount;
-(char)isLDAPAccount;
-(char)isBookmarkDAVAccount;
-(char)isCalDAVAccount;
-(char)isCardDAVAccount;
-(char)isCalDAVChildAccount;
-(char)isSubscribedCalendarAccount;
-(void)setTrustHandler:(DATrustHandler *)arg1 ;
-(NSArray *)appIdsForPasswordPrompt;
-(NSMutableArray *)pendingQueries;
-(void)setPendingQueries:(NSMutableArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)pendingQueryQueue;
-(void)setPendingQueryQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)lastQueryStartedTime;
-(void)setLastQueryStartedTime:(unsigned long long)arg1 ;
-(void)setDataclassPropertyURLsByDataclass:(NSMutableDictionary *)arg1 ;
-(void)_webLoginRequestedAtURL:(id)arg1 reasonString:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)handleValidationError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)synchronizeEventsFolder:(id)arg1 previousTag:(id)arg2 actions:(id)arg3 highestIdContext:(id)arg4 isInitialUberSync:(char)arg5 isResyncAfterConnectionFailed:(char)arg6 moreLocalChangesAvailable:(char)arg7 consumer:(id)arg8 ;
-(char)sendEmailsForCalEvents:(id)arg1 consumer:(id)arg2 ;
-(id)beginDownloadingAttachmentWithUUID:(id)arg1 consumer:(id)arg2 ;
-(void)cancelDownloadingInstance:(id)arg1 error:(id)arg2 ;
-(id)requestCalendarAvailabilityForStartDate:(id)arg1 endDate:(id)arg2 ignoredEventID:(id)arg3 addresses:(id)arg4 consumer:(id)arg5 ;
-(id)performCalendarDirectorySearchForTerms:(id)arg1 recordTypes:(id)arg2 resultLimit:(unsigned)arg3 consumer:(id)arg4 ;
-(id)respondToShareRequestForCalendar:(id)arg1 withResponse:(int)arg2 consumer:(id)arg3 ;
-(void)cancelShareResponseInstance:(id)arg1 error:(id)arg2 ;
-(void)synchronizeContactsFolder:(id)arg1 previousTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 highestIdContext:(id)arg5 isInitialUberSync:(char)arg6 isResyncAfterConnectionFailed:(char)arg7 previousTagIsSuspect:(char)arg8 moreLocalChangesAvailable:(char)arg9 consumer:(id)arg10 ;
-(void)updateOofSettingsWithParams:(id)arg1 consumer:(id)arg2 ;
-(void)retrieveOofSettingsForConsumer:(id)arg1 ;
-(id)getPendingQueryQueue;
-(void)_dequeueQuery;
-(void)synchronizeToDosFolder:(id)arg1 previousTag:(id)arg2 actions:(id)arg3 highestIdContext:(id)arg4 isInitialUberSync:(char)arg5 isResyncAfterConnectionFailed:(char)arg6 moreLocalChangesAvailable:(char)arg7 consumer:(id)arg8 ;
-(int)toDosNumberOfPastDaysToSync;
-(void)setToDosNumberOfPastDaysToSync:(int)arg1 ;
-(void)synchronizeNotesFolder:(id)arg1 noteContext:(id)arg2 previousTag:(id)arg3 actions:(id)arg4 changeSet:(id)arg5 notesToDeleteAfterSync:(id)arg6 isInitialUberSync:(char)arg7 isResyncAfterConnectionFailed:(char)arg8 moreLocalChangesAvailable:(char)arg9 consumer:(id)arg10 ;
-(void)getRootFolderWithConsumer:(id)arg1 ;
-(void)synchronizeBookmarkTreeWithConsumer:(id)arg1 hasRemoteChanges:(char)arg2 ;
-(void)saveAccountProperties;
-(void)setShouldUseOpportunisticSockets:(char)arg1 ;
-(void)setWasUserInitiated:(char)arg1 ;
-(void)cancelAllSearchQueries;
-(char)searchQueriesRunning;
-(DATaskManager *)taskManager;
-(char)useSSL;
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(void)setConsumer:(id)arg1 forTask:(id)arg2 ;
-(id)consumerForTask:(id)arg1 ;
-(void)removeConsumerForTask:(id)arg1 ;
-(id)stateString;
-(char)isGoogleAccount;
-(void)setEnabled:(char)arg1 forDADataclass:(int)arg2 ;
-(void)resetAccountID;
-(id)defaultContactsFolder;
-(id)defaultEventsFolder;
-(id)defaultToDosFolder;
-(id)defaultNotesFolder;
-(NSString *)changeTrackingID;
-(void)suspendMonitoringFoldersWithIDs:(id)arg1 ;
-(void)resumeMonitoringFoldersWithIDs:(id)arg1 ;
-(void)setUseSSL:(char)arg1 ;
-(void)setAccountIntProperty:(int)arg1 forKey:(id)arg2 ;
-(char)accountBoolPropertyForKey:(id)arg1 ;
-(id)domainOnly;
-(id)usernameWithoutDomain;
-(NSData *)identityPersist;
-(char)accountHasSignificantPropertyChangesFromOldAccountInfo:(id)arg1 ;
-(void)cleanupAccountFiles;
-(void)discoverInitialPropertiesWithConsumer:(id)arg1 ;
-(id)contactsFolders;
-(id)eventsFolders;
-(id)toDosFolders;
-(id)notesFolders;
-(id)defaultContainerIdentifierForDADataclass:(int)arg1 ;
-(void)_reallyCancelSearchQuery:(id)arg1 ;
-(void)_reallyCancelAllSearchQueries;
-(void)_reallyCancelPendingSearchQuery:(id)arg1 ;
-(void)_reallyPerformSearchQuery:(id)arg1 ;
-(char)_reallySearchQueriesRunning;
-(char)autodiscoverAccountConfigurationWithConsumer:(id)arg1 ;
-(char)isActiveSyncAccount;
-(char)isEqualToAccount:(id)arg1 ;
-(id)localizedIdenticalAccountFailureMessage;
-(id)localizedInvalidPasswordMessage;
-(id)onBehalfOfBundleIdentifier;
-(char)accountContainsEmailAddress:(id)arg1 ;
-(CFURLStorageSessionRef)copyStorageSession;
-(id)customConnectionProperties;
-(char)shouldUseOpportunisticSockets;
-(void)dropAssertionsAndRenewCredentialsWithHandler:(/*^block*/id)arg1 ;
-(char)handleTrustChallenge:(id)arg1 ;
-(NSURL *)principalURL;
-(id)accountPropertyForKey:(id)arg1 ;
-(void)setAccountProperty:(id)arg1 forKey:(id)arg2 ;
-(NSString *)accountDescription;
-(void)setAccountDescription:(NSString *)arg1 ;
-(void)removeAccountPropertyForKey:(id)arg1 ;
-(id)syncStoreIdentifier;
-(NSArray *)emailAddresses;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(ACAccount *)backingAccountInfo;
-(id)inboxFolder;
-(id)sentItemsFolder;
-(id)deletedItemsFolder;
-(id)draftsFolder;
-(char)isHotmailAccount;
-(NSString *)persistentUUID;
-(char)enabledForDADataclass:(int)arg1 ;
-(int)supportsMailboxSearch;
-(int)supportsEmailFlagging;
-(char)reattemptInvitationLinkageForMetaData:(id)arg1 inFolderWithId:(id)arg2 ;
-(id)unactionableICSRepresentationForMetaData:(id)arg1 inFolderWithId:(id)arg2 outSummary:(id*)arg3 ;
-(void)performSearchQuery:(id)arg1 ;
-(void)cancelSearchQuery:(id)arg1 ;
-(NSData *)signingIdentityPersistentReference;
-(oneway void)setSigningIdentityPersistentReference:(NSData *)arg1 ;
-(NSData *)encryptionIdentityPersistentReference;
-(oneway void)setEncryptionIdentityPersistentReference:(NSData *)arg1 ;
-(char)isEnabledForDataclass:(id)arg1 ;
-(NSString *)username;
-(char)isValidating;
-(char)isDisabled;
@end
