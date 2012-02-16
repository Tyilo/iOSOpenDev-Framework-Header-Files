/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */


#import <IMCore/IMChat.h>

@class NSString, NSMutableDictionary, IMAccount, NSArray, IMMessage, NSDate, NSMutableSet, IMHandle, NSMutableArray;

@interface IMChat : NSObject {
	NSString *_guid;	// 4 = 0x4
	NSString *_currentQuery;	// 8 = 0x8
	NSString *_identifier;	// 12 = 0xc
	IMAccount *_account;	// 16 = 0x10
	NSString *_roomName;	// 20 = 0x14
	NSString *_roomNameWithoutSuffix;	// 24 = 0x18
	NSDate *_dateCreated;	// 28 = 0x1c
	NSDate *_dateModified;	// 32 = 0x20
	NSMutableArray *_chatItems;	// 36 = 0x24
	NSMutableDictionary *_unfinishedChatItemMap;	// 40 = 0x28
	NSMutableArray *_participants;	// 44 = 0x2c
	NSMutableDictionary *_participantStates;	// 48 = 0x30
	id _typingIndicatorTimer;	// 52 = 0x34
	IMMessage *_invitationForPendingParticipants;	// 56 = 0x38
	NSMutableArray *_messagesPendingJoin;	// 60 = 0x3c
	NSMutableDictionary *_chatItemsChanged;	// 64 = 0x40
	NSMutableDictionary *_messageMap;	// 68 = 0x44
	NSMutableDictionary *_chatProperties;	// 72 = 0x48
	NSMutableDictionary *_participantProperties;	// 76 = 0x4c
	unsigned _overallChatStatus;	// 80 = 0x50
	int _joinState;	// 84 = 0x54
	unsigned char _style;	// 88 = 0x58
	unsigned _numberOfMessagesToKeepLoaded;	// 92 = 0x5c
	double _joinedTimeInterval;	// 96 = 0x60
	unsigned _chatItemChangeCount;	// 104 = 0x68
	unsigned _cachedUnreadCount;	// 108 = 0x6c
	NSMutableSet *_cachedReadMessages;	// 112 = 0x70
	unsigned _cachedFailureCount;	// 116 = 0x74
	unsigned _isRefreshing : 1;	// 120 = 0x78
	unsigned _isFirstMessageInvitation : 1;	// 120 = 0x78
	unsigned _wasInvitationHandled : 1;	// 120 = 0x78
	unsigned _didSendAFinishedMessage : 1;	// 120 = 0x78
	unsigned _shouldPostIndividualItemChanges : 1;	// 120 = 0x78
	unsigned _shouldAnnouncePeopleJoin : 1;	// 120 = 0x78
	unsigned _didPostWillChangeNotification : 1;	// 120 = 0x78
}
@property(assign, nonatomic, setter=_setShouldPostIndividualItemChanges:) BOOL _shouldPostIndividualItemChanges;	// G=0x36b89; S=0x36b9d; 
@property(readonly, assign, nonatomic) BOOL _isRefreshing;	// G=0x36b5d; 
@property(readonly, assign, nonatomic) BOOL _shouldRegisterChat;	// G=0x378e1; 
@property(retain, nonatomic) IMMessage *invitationForPendingParticipants;	// G=0x401fd; S=0x4020d; @synthesize=_invitationForPendingParticipants
@property(retain, nonatomic) IMHandle *recipient;	// G=0x3f155; S=0x3ee59; 
@property(readonly, assign, nonatomic) IMMessage *lastFinishedMessage;	// G=0x3a071; 
@property(readonly, assign, nonatomic) IMMessage *lastMessage;	// G=0x3a251; 
@property(readonly, assign, nonatomic) NSArray *chatItems;	// G=0x4016d; @synthesize=_chatItems
@property(readonly, assign, nonatomic) BOOL hasUnhandledInvitation;	// G=0x3d89d; 
@property(readonly, assign, nonatomic) int joinState;	// G=0x401ed; @synthesize=_joinState
@property(readonly, assign, nonatomic) NSDate *dateModified;	// G=0x401dd; @synthesize=_dateModified
@property(readonly, assign, nonatomic) NSDate *dateCreated;	// G=0x401cd; @synthesize=_dateCreated
@property(readonly, assign, nonatomic) NSString *roomNameWithoutSuffix;	// G=0x3d675; 
@property(readonly, assign, nonatomic) NSString *roomName;	// G=0x401bd; @synthesize=_roomName
@property(readonly, assign, nonatomic) unsigned overallChatStatus;	// G=0x3d5c1; 
@property(readonly, assign, nonatomic) BOOL canHaveMultipleParticipants;	// G=0x3d599; 
@property(readonly, assign, nonatomic) NSString *chatIdentifier;	// G=0x3d4b9; 
@property(readonly, assign, nonatomic) unsigned char chatStyle;	// G=0x401ad; @synthesize=_style
@property(readonly, assign, nonatomic) unsigned messageFailureCount;	// G=0x3a761; 
@property(readonly, assign, nonatomic) unsigned unreadMessageCount;	// G=0x3a5fd; 
@property(readonly, assign, nonatomic) unsigned messageCount;	// G=0x3a3e9; 
@property(readonly, assign, nonatomic) NSArray *participants;	// G=0x4019d; @synthesize=_participants
@property(readonly, assign, nonatomic) IMAccount *account;	// G=0x4018d; @synthesize=_account
@property(readonly, assign, nonatomic) NSString *persistentID;	// G=0x3d665; 
@property(readonly, assign, nonatomic) NSString *guid;	// G=0x4017d; @synthesize=_guid
// declared property setter: - (void)setInvitationForPendingParticipants:(id)pendingParticipants;	// 0x4020d
// declared property getter: - (id)invitationForPendingParticipants;	// 0x401fd
// declared property getter: - (int)joinState;	// 0x401ed
// declared property getter: - (id)dateModified;	// 0x401dd
// declared property getter: - (id)dateCreated;	// 0x401cd
// declared property getter: - (id)roomName;	// 0x401bd
// declared property getter: - (unsigned char)chatStyle;	// 0x401ad
// declared property getter: - (id)participants;	// 0x4019d
// declared property getter: - (id)account;	// 0x4018d
// declared property getter: - (id)guid;	// 0x4017d
// declared property getter: - (id)chatItems;	// 0x4016d
- (id)_initWithDictionaryRepresentation:(id)dictionaryRepresentation initialItems:(id)items;	// 0x3fdc5
- (id)description;	// 0x3fc99
- (void)_daemonDied:(id)died;	// 0x3fc0d
- (void)_daemonAlive:(id)alive;	// 0x3fb85
- (void)_accountControllerUpdated:(id)updated;	// 0x3fafd
- (BOOL)_sanityCheckAccounts;	// 0x3f801
- (void)addPendingParticipants:(id)participants;	// 0x3f749
- (void)removeParticipants:(id)participants reason:(id)reason;	// 0x3f56d
- (void)inviteParticipants:(id)participants reason:(id)reason;	// 0x3f381
- (void)_addParticipant:(id)participant;	// 0x3f2e9
- (void)leave;	// 0x3f235
- (void)join;	// 0x3f175
// declared property getter: - (id)recipient;	// 0x3f155
// declared property setter: - (void)setRecipient:(id)recipient;	// 0x3ee59
- (void)_setAccount:(id)account;	// 0x3eda5
- (void)setValue:(id)value forProperty:(id)property ofParticipant:(id)participant;	// 0x3ec71
- (id)valueForProperty:(id)property ofParticipant:(id)participant;	// 0x3ec41
- (id)allPropertiesOfParticipant:(id)participant;	// 0x3ec05
- (void)setValue:(id)value forChatProperty:(id)chatProperty;	// 0x3ea6d
- (id)valueForChatProperty:(id)chatProperty;	// 0x3ea4d
- (id)allChatProperties;	// 0x3ea3d
- (void)_setChatProperties:(id)properties;	// 0x3e9d9
- (BOOL)_isDuplicate:(id)duplicate;	// 0x3e9d5
- (id)_lastMessageChatItem;	// 0x3e809
- (void)markAllMessagesAsRead;	// 0x3e601
- (void)markMessagesAsRead:(id)read;	// 0x3e5a5
- (void)markMessageAsRead:(id)read;	// 0x3e541
- (void)_markMessagesAsRead:(id)read;	// 0x3e365
- (void)_cacheReadMessageGUID:(id)guid;	// 0x3e2ed
- (void)_setTimerForReadMessageCache;	// 0x3e291
- (void)__clearReadMessageCache;	// 0x3e225
- (id)_messageChatItems;	// 0x3e115
- (void)updateMessage:(id)message;	// 0x3df99
- (void)sendMessage:(id)message;	// 0x3dd31
- (void)cancelMessage:(id)message;	// 0x3da8d
- (void)declineInvitation;	// 0x3d9c1
- (void)acceptInvitation;	// 0x3d8cd
// declared property getter: - (BOOL)hasUnhandledInvitation;	// 0x3d89d
// declared property getter: - (id)roomNameWithoutSuffix;	// 0x3d675
// declared property getter: - (id)persistentID;	// 0x3d665
- (void)setRoomName:(id)name;	// 0x3d609
// declared property getter: - (unsigned)overallChatStatus;	// 0x3d5c1
// declared property getter: - (BOOL)canHaveMultipleParticipants;	// 0x3d599
- (id)convertToChatStyle:(unsigned char)chatStyle;	// 0x3d595
// declared property getter: - (id)chatIdentifier;	// 0x3d4b9
- (void)_clearCachedIdentifier;	// 0x3d48d
- (unsigned)stateForParticipant:(id)participant;	// 0x3d3fd
- (id)participantsWithState:(unsigned)state;	// 0x3d2fd
- (void)_fixLastStatusMessageIfNecessary;	// 0x3d1b5
- (void)_remapHandle:(id)handle toHandle:(id)handle2;	// 0x3d0c1
- (void)_showErrorMessage:(id)message;	// 0x3d02d
- (void)_participant:(id)participant statusChanged:(int)changed;	// 0x3ce59
- (void)_setJoinState:(int)state quietly:(BOOL)quietly;	// 0x3cc95
- (void)_setJoinState:(int)state;	// 0x3cc81
- (void)_handleIncomingMessage:(id)message;	// 0x3c189
- (void)_handleCancelledMessage:(id)message;	// 0x3bffd
- (void)_handleMessageGUIDDeletions:(id)deletions;	// 0x3be99
- (void)_setParticipantState:(unsigned)state forHandle:(id)handle;	// 0x3bd31
- (void)_postNotification:(id)notification userInfo:(id)info;	// 0x3bc91
- (void)_accountLoggedOut:(id)anOut;	// 0x3bbdd
- (void)_unwatchHandleStatusChangedForHandle:(id)handle;	// 0x3bb39
- (void)_watchHandleStatusChangedForHandle:(id)handle;	// 0x3ba69
- (void)_handleHandleStatusChanged:(id)changed;	// 0x3b955
- (void)_recomputeOverallChatStatusQuietly:(BOOL)quietly;	// 0x3b7c1
- (void)mark;	// 0x3b70d
- (void)clear;	// 0x3b4c5
- (BOOL)deleteAllHistory;	// 0x3afb1
- (BOOL)deleteChatItems:(id)items;	// 0x3aa95
- (BOOL)deleteChatItem:(id)item;	// 0x3a7a9
- (BOOL)canDeleteChatItem:(id)item;	// 0x3a771
// declared property getter: - (unsigned)messageFailureCount;	// 0x3a761
- (unsigned)_messageFailureCount;	// 0x3a60d
// declared property getter: - (unsigned)unreadMessageCount;	// 0x3a5fd
- (unsigned)_unreadMessageCount;	// 0x3a409
// declared property getter: - (unsigned)messageCount;	// 0x3a3e9
// declared property getter: - (id)lastMessage;	// 0x3a251
// declared property getter: - (id)lastFinishedMessage;	// 0x3a071
- (id)chatItemForMessage:(id)message;	// 0x39f69
- (id)_chatItemForGUID:(id)guid;	// 0x39e7d
- (id)messageForGUID:(id)guid;	// 0x39d81
- (void)processChatItem:(id)item;	// 0x39d7d
- (BOOL)shouldAppendDatestampAfterChatItem:(id)item andBeforeChatItem:(id)item2;	// 0x39d79
- (BOOL)shouldAppendTimestampAfterChatItem:(id)item andBeforeChatItem:(id)item2;	// 0x39d75
- (BOOL)shouldInsertChatItem:(id)item atIndex:(unsigned)index;	// 0x39d71
- (void)_insertArchivedChatItems:(id)items;	// 0x39add
- (void)_insertHistoricalChatItems:(id)items queryID:(id)anId isRefresh:(BOOL)refresh;	// 0x396a1
- (void)_removeInitialTypingIndicator;	// 0x39619
- (void)_buildChatItemForErrorMessage:(id)errorMessage;	// 0x395a9
- (void)_buildChatItemForNewRecipient:(id)newRecipient isNewAccount:(BOOL)account;	// 0x395a5
- (void)_buildChatItemForParticipantState:(unsigned)participantState handle:(id)handle;	// 0x395a1
- (void)_buildChatItemForOverallChatStatusFrom:(unsigned)from to:(unsigned)to;	// 0x3959d
- (void)_buildChatItemForDecidingHandleWentOffline:(id)decidingHandleWentOffline;	// 0x39599
- (void)_buildChatItemForDisconnectOrLogout;	// 0x39595
- (void)_buildInitialChatItems:(id)items;	// 0x38f6d
- (void)_updateHeaderChatItem;	// 0x38f69
- (id)_newHeaderChatItemWithDate:(id)date;	// 0x38f65
- (void)_appendChatItem:(id)item;	// 0x38f25
- (void)_removeChatItem:(id)item andTimestamp:(BOOL)timestamp;	// 0x38f01
- (void)_replaceChatItem:(id)item andTimestamp:(BOOL)timestamp withChatItem:(id)chatItem;	// 0x38d4d
- (unsigned)_insertChatItem:(id)item atIndex:(unsigned)index;	// 0x38ba5
- (void)_replaceChatItem:(id)item withChatItem:(id)chatItem;	// 0x386fd
- (void)_postChatItem:(id)item atIndex:(unsigned)index;	// 0x38511
- (void)_postWillChangeIfNecessary;	// 0x383c1
- (id)_timeStampForChatItem:(id)chatItem atIndex:(unsigned)index;	// 0x383bd
- (id)_dateStampForChatItem:(id)chatItem atIndex:(unsigned)index;	// 0x383b9
- (id)_newInitialTypingIndicatorChatItem;	// 0x383b5
- (BOOL)_shouldDisplayInitialTypingIndicator;	// 0x383b1
- (BOOL)_shouldAnnouncePeopleJoin;	// 0x3832d
- (void)_endChatItemChanges;	// 0x37fc9
- (void)_beginChatItemChanges;	// 0x37ed5
- (void)_updateUnreadCount;	// 0x37d5d
- (void)_clearUnreadCount;	// 0x37bf5
- (void)_updateFailedCount;	// 0x37a7d
- (void)_unmapChatItem:(id)item;	// 0x379b5
- (void)_mapChatItem:(id)item;	// 0x378e5
// declared property getter: - (BOOL)_shouldRegisterChat;	// 0x378e1
- (void)dealloc;	// 0x37669
- (id)init;	// 0x3763d
- (id)_initWithGUID:(id)guid account:(id)account style:(unsigned char)style roomName:(id)name chatItems:(id)items participants:(id)participants;	// 0x36bb5
// declared property setter: - (void)_setShouldPostIndividualItemChanges:(BOOL)_set;	// 0x36b9d
// declared property getter: - (BOOL)_shouldPostIndividualItemChanges;	// 0x36b89
- (void)_setIsRefreshing:(BOOL)refreshing;	// 0x36b71
// declared property getter: - (BOOL)_isRefreshing;	// 0x36b5d
@end

@interface IMChat (IMChat_HistoryAdditions)
@property(assign, nonatomic) unsigned numberOfMessagesToKeepLoaded;	// G=0x40775; S=0x40785; 
- (id)loadMessagesUpToGUID:(id)guid loadImmediately:(BOOL)immediately;	// 0x40f9d
- (id)loadMessagesBeforeDate:(id)date limit:(unsigned)limit loadImmediately:(BOOL)immediately;	// 0x409ed
- (id)loadMessagesBeforeDate:(id)date limit:(unsigned)limit;	// 0x409c9
- (id)loadMessagesWithGUIDs:(id)guids;	// 0x4086d
- (id)_buildLoadQueryForSynchronize;	// 0x40825
// declared property setter: - (void)setNumberOfMessagesToKeepLoaded:(unsigned)keepLoaded;	// 0x40785
// declared property getter: - (unsigned)numberOfMessagesToKeepLoaded;	// 0x40775
- (void)_trimMessagesAsNeeded;	// 0x40669
- (void)_trimMessagesLeavingNumber:(unsigned)number;	// 0x40231
@end

@interface IMChat (IMChat_SignallingAdditions)
- (BOOL)sendDowngradeNotificationTo:(id)to;	// 0x416a9
- (void)_handleIncomingCommand:(id)command;	// 0x415fd
- (void)_handleDeliveredCommand:(id)command;	// 0x41551
@end

@interface IMChat (IMTypingIndicator_Additions)
- (void)_setTypingIndicatorTimeout;	// 0x41e2d
- (void)_typingIndicatorTimedOut:(id)anOut;	// 0x41da9
- (void)_clearIncomingTypingIndicators;	// 0x41a89
- (void)_clearTypingIndicatorTimeout;	// 0x419ed
- (void)_updateTypingIndicatorTimeout;	// 0x417f5
@end