/*
 * Copyright 2014 Canonical Ltd.
 * Authors:
 *      Roberto Mier
 *      Tiago Herrmann
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef TLVALUES_H
#define TLVALUES_H

enum TLValues {
    // https://core.telegram.org/mtproto/auth_key
    TL_ReqPQ = 0x60469778,
    TL_ResPQ = 0x05162463,
    TL_ReqDHParams = 0xd712e4be,
    TL_PQInnerData = 0x83c95aec,
    TL_PQInnerDataTemp = 0x3c6a84d4,
    TL_ServerDHParamsOK = 0xd0e8075c,
    TL_ServerDHParamsFail = 0x79cb045d,
    TL_ServerDHInnerData = 0xb5890dba,
    TL_ClientDHInnerData = 0x6643b654,
    TL_SetClientDHParams = 0xf5045f1f,
    TL_DHGenOK = 0x3bcbf734,

    // https://core.telegram.org/mtproto/service_messages
    TL_RpcResult = 0xf35c6d01,
    TL_RpcError = 0x2144ca19,
    TL_RpcDropAnswer = 0x58e4a740,
    TL_RpcAnswerUnknown = 0x5e2ad36e,
    TL_RpcAnswerDroppedRunning = 0xcd78e586,
    TL_RpcAnswerDropped = 0xa43ad8b7,
    TL_GetFutureSalts = 0xb921bd04,
    TL_FutureSalt = 0x0949d9dc,
    TL_FutureSalts = 0xae500895,
    TL_Ping = 0x7abe77ec,
    TL_Pong = 0x347773c5,
    TL_PingDelayDisconnect = 0xf3427b8c,
    TL_DestroySession = 0xe7512126,
    TL_DestroySessionOk = 0xe22045fc,
    TL_DestroySessionNone = 0x62d350c9,
    TL_NewSessionCreated = 0x9ec20908,
    TL_MsgContainer = 0x73f1f8dc,
    TL_MsgCopy = 0xe06046b2,
    TL_GZipPacked = 0x3072cfa1,
    TL_HttpWait = 0x9299359f,

    // https://core.telegram.org/mtproto/service_messages_about_messages
    TL_MsgsAck = 0x62d6b459,
    TL_BadMsgNotification = 0xa7eff811,
    TL_BadServerSalt = 0xedab447b,
    TL_MsgsStateReq = 0xda69fb52,
    TL_MsgsStateInfo = 0x04deb57d,
    TL_MsgsAllInfo = 0x8cc0d131,
    TL_MsgDetailedInfo = 0x276d3ec6,
    TL_MsgNewDetailedInfo = 0x809db6df,
    TL_MsgResendReq = 0x7d861a08,

    // https://core.telegram.org/schema by generator
    TL_BoolFalse = 0xbc799737,
    TL_BoolTrue = 0x997275b5,
    TL_Vector = 0x1cb5c415,
    TL_Error = 0xc4b9f9bb,
    TL_Null = 0x56730bcc,
    TL_InputPeerEmpty = 0x7f3b18ea,
    TL_InputPeerSelf = 0x7da07ec9,
    TL_InputPeerContact = 0x1023dbe8,
    TL_InputPeerForeign = 0x9b447325,
    TL_InputPeerChat = 0x179be863,
    TL_InputUserEmpty = 0xb98886cf,
    TL_InputUserSelf = 0xf7c1b13f,
    TL_InputUserContact = 0x86e94f65,
    TL_InputUserForeign = 0x655e74ff,
    TL_InputPhoneContact = 0xf392b7f4,
    TL_InputFile = 0xf52ff27f,
    TL_InputMediaEmpty = 0x9664f57f,
    TL_InputMediaUploadedPhoto = 0x2dc53a7d,
    TL_InputMediaPhoto = 0x8f2ab2ec,
    TL_InputMediaGeoPoint = 0xf9c44144,
    TL_InputMediaContact = 0xa6e45987,
    TL_InputMediaUploadedVideo = 0x133ad6f6,
    TL_InputMediaUploadedThumbVideo = 0x9912dabf,
    TL_InputMediaVideo = 0x7f023ae6,
    TL_InputChatPhotoEmpty = 0x1ca48f57,
    TL_InputChatUploadedPhoto = 0x94254732,
    TL_InputChatPhoto = 0xb2e1bf08,
    TL_InputGeoPointEmpty = 0xe4c123d6,
    TL_InputGeoPoint = 0xf3b7acc9,
    TL_InputPhotoEmpty = 0x1cd7bf0d,
    TL_InputPhoto = 0xfb95c6c4,
    TL_InputVideoEmpty = 0x5508ec75,
    TL_InputVideo = 0xee579652,
    TL_InputFileLocation = 0x14637196,
    TL_InputVideoFileLocation = 0x3d0364ec,
    TL_InputPhotoCropAuto = 0xade6b004,
    TL_InputPhotoCrop = 0xd9915325,
    TL_InputAppEvent = 0x770656a8,
    TL_PeerUser = 0x9db1bc6d,
    TL_PeerChat = 0xbad0e5bb,
    TL_StorageFileUnknown = 0xaa963b05,
    TL_StorageFileJpeg = 0x7efe0e,
    TL_StorageFileGif = 0xcae1aadf,
    TL_StorageFilePng = 0xa4f63c0,
    TL_StorageFilePdf = 0xae1e508d,
    TL_StorageFileMp3 = 0x528a0677,
    TL_StorageFileMov = 0x4b09ebbc,
    TL_StorageFilePartial = 0x40bc6f52,
    TL_StorageFileMp4 = 0xb3cea0e4,
    TL_StorageFileWebp = 0x1081464c,
    TL_FileLocationUnavailable = 0x7c596b46,
    TL_FileLocation = 0x53d69076,
    TL_UserEmpty = 0x200250ba,
    TL_UserSelf = 0x7007b451,
    TL_UserContact = 0xcab35e18,
    TL_UserRequest = 0xd9ccc4ef,
    TL_UserForeign = 0x75cf7a8,
    TL_UserDeleted = 0xd6016d7a,
    TL_UserProfilePhotoEmpty = 0x4f11bae1,
    TL_UserProfilePhoto = 0xd559d8c8,
    TL_UserStatusEmpty = 0x9d05049,
    TL_UserStatusOnline = 0xedb93949,
    TL_UserStatusOffline = 0x8c703f,
    TL_UserStatusRecently = 0xe26f42f1,
    TL_UserStatusLastWeek = 0x7bf09fc,
    TL_UserStatusLastMonth = 0x77ebc742,
    TL_ChatEmpty = 0x9ba2d800,
    TL_Chat = 0x6e9c9bc7,
    TL_ChatForbidden = 0xfb0ccc41,
    TL_ChatFull = 0x630e61be,
    TL_ChatParticipant = 0xc8d7493e,
    TL_ChatParticipantsForbidden = 0xfd2bb8a,
    TL_ChatParticipants = 0x7841b415,
    TL_ChatPhotoEmpty = 0x37c1011c,
    TL_ChatPhoto = 0x6153276a,
    TL_MessageEmpty = 0x83e5de54,
    TL_Message = 0x22eb6aba,
    TL_MessageForwarded = 0x5f46804,
    TL_MessageService = 0x9f8d60bb,
    TL_MessageMediaEmpty = 0x3ded6320,
    TL_MessageMediaPhoto = 0xc8c45a2a,
    TL_MessageMediaVideo = 0xa2d24290,
    TL_MessageMediaGeo = 0x56e0d474,
    TL_MessageMediaContact = 0x5e7d2f39,
    TL_MessageMediaUnsupported = 0x29632a36,
    TL_MessageActionEmpty = 0xb6aef7b0,
    TL_MessageActionChatCreate = 0xa6638b9a,
    TL_MessageActionChatEditTitle = 0xb5a1ce5a,
    TL_MessageActionChatEditPhoto = 0x7fcb13a8,
    TL_MessageActionChatDeletePhoto = 0x95e3fbef,
    TL_MessageActionChatAddUser = 0x5e3cfc4b,
    TL_MessageActionChatDeleteUser = 0xb2ae9b0c,
    TL_Dialog = 0x214a8cdf,
    TL_PhotoEmpty = 0x2331b22d,
    TL_Photo = 0x22b56751,
    TL_PhotoSizeEmpty = 0xe17e23c,
    TL_PhotoSize = 0x77bfb61b,
    TL_PhotoCachedSize = 0xe9a734fa,
    TL_VideoEmpty = 0xc10658a8,
    TL_Video = 0x388fa391,
    TL_GeoPointEmpty = 0x1117dd5f,
    TL_GeoPoint = 0x2049d70c,
    TL_AuthCheckedPhone = 0xe300cc3b,
    TL_AuthSentCode = 0xefed51d9,
    TL_AuthSentAppCode = 0xe325edcf,
    TL_AuthAuthorization = 0xf6b673a4,
    TL_AuthExportedAuthorization = 0xdf969c2d,
    TL_InputNotifyPeer = 0xb8bc5b0c,
    TL_InputNotifyUsers = 0x193b4417,
    TL_InputNotifyChats = 0x4a95e84e,
    TL_InputNotifyAll = 0xa429b886,
    TL_InputPeerNotifyEventsEmpty = 0xf03064d8,
    TL_InputPeerNotifyEventsAll = 0xe86a2c74,
    TL_InputPeerNotifySettings = 0x46a2ce98,
    TL_PeerNotifyEventsEmpty = 0xadd53cb3,
    TL_PeerNotifyEventsAll = 0x6d1ded88,
    TL_PeerNotifySettingsEmpty = 0x70a68512,
    TL_PeerNotifySettings = 0x8d5e11ee,
    TL_WallPaper = 0xccb03657,
    TL_UserFull = 0x771095da,
    TL_Contact = 0xf911c994,
    TL_ImportedContact = 0xd0028438,
    TL_ContactBlocked = 0x561bc879,
    TL_ContactFound = 0xea879f95,
    TL_ContactSuggested = 0x3de191a1,
    TL_ContactStatus = 0xd3680c61,
    TL_ChatLocated = 0x3631cf4c,
    TL_ContactsForeignLinkUnknown = 0x133421f8,
    TL_ContactsForeignLinkRequested = 0xa7801f47,
    TL_ContactsForeignLinkMutual = 0x1bea8ce1,
    TL_ContactsMyLinkEmpty = 0xd22a1c60,
    TL_ContactsMyLinkRequested = 0x6c69efee,
    TL_ContactsMyLinkContact = 0xc240ebd9,
    TL_ContactsLink = 0xeccea3f5,
    TL_ContactsContacts = 0x6f8b8cb2,
    TL_ContactsContactsNotModified = 0xb74ba9d2,
    TL_ContactsImportedContacts = 0xad524315,
    TL_ContactsBlocked = 0x1c138d15,
    TL_ContactsBlockedSlice = 0x900802a1,
    TL_ContactsFound = 0x566000e,
    TL_ContactsSuggested = 0x5649dcc5,
    TL_MessagesDialogs = 0x15ba6c40,
    TL_MessagesDialogsSlice = 0x71e094f3,
    TL_MessagesMessages = 0x8c718e87,
    TL_MessagesMessagesSlice = 0xb446ae3,
    TL_MessagesMessageEmpty = 0x3f4e0648,
    TL_MessagesMessage = 0xff90c417,
    TL_MessagesStatedMessages = 0x969478bb,
    TL_MessagesStatedMessage = 0xd07ae726,
    TL_MessagesSentMessage = 0xd1f4d35c,
    TL_MessagesChat = 0x40e9002a,
    TL_MessagesChats = 0x8150cbd8,
    TL_MessagesChatFull = 0xe5d7d19c,
    TL_MessagesAffectedHistory = 0xb7de36f2,
    TL_InputMessagesFilterEmpty = 0x57e2f66c,
    TL_InputMessagesFilterPhotos = 0x9609a51c,
    TL_InputMessagesFilterVideo = 0x9fc00e65,
    TL_InputMessagesFilterPhotoVideo = 0x56e9f0e4,
    TL_InputMessagesFilterDocument = 0x9eddf188,
    TL_UpdateNewMessage = 0x13abdb3,
    TL_UpdateMessageID = 0x4e90bfd6,
    TL_UpdateReadMessages = 0xc6649e31,
    TL_UpdateDeleteMessages = 0xa92bfe26,
    TL_UpdateRestoreMessages = 0xd15de04d,
    TL_UpdateUserTyping = 0x6baa8508,
    TL_UpdateChatUserTyping = 0x3c46cfe6,
    TL_UpdateChatParticipants = 0x7761198,
    TL_UpdateUserStatus = 0x1bfbd823,
    TL_UpdateUserName = 0xa7332b73,
    TL_UpdateUserPhoto = 0x95313b0c,
    TL_UpdateContactRegistered = 0x2575bbb9,
    TL_UpdateContactLink = 0x51a48a9a,
    TL_UpdateActivation = 0x6f690963,
    TL_UpdateNewAuthorization = 0x8f06529a,
    TL_UpdatesState = 0xa56c2a3e,
    TL_DisabledFeature = 0xae636f24,
    TL_UpdatesDifferenceEmpty = 0x5d75a138,
    TL_UpdatesDifference = 0xf49ca0,
    TL_UpdatesDifferenceSlice = 0xa8fb1981,
    TL_UpdatesTooLong = 0xe317af7e,
    TL_UpdateShortMessage = 0xd3f45784,
    TL_UpdateShortChatMessage = 0x2b2fbd4e,
    TL_UpdateShort = 0x78d4dec1,
    TL_UpdatesCombined = 0x725b04c3,
    TL_Updates = 0x74ae4240,
    TL_PhotosPhotos = 0x8dca6aa5,
    TL_PhotosPhotosSlice = 0x15051f54,
    TL_PhotosPhoto = 0x20212ca8,
    TL_UploadFile = 0x96a18d5,
    TL_DcOption = 0x2ec2a43c,
    TL_Config = 0x7dae33e0,
    TL_NearestDc = 0x8e1a1775,
    TL_HelpAppUpdate = 0x8987f311,
    TL_HelpNoAppUpdate = 0xc45a6536,
    TL_HelpInviteText = 0x18cb9f78,
    TL_MessagesStatedMessagesLinks = 0x3e74f5c6,
    TL_MessagesStatedMessageLink = 0xa9af2881,
    TL_MessagesSentMessageLink = 0xe9db4a3f,
    TL_InputGeoChat = 0x74d456fa,
    TL_InputNotifyGeoChatPeer = 0x4d8ddec8,
    TL_GeoChat = 0x75eaea5a,
    TL_GeoChatMessageEmpty = 0x60311a9b,
    TL_GeoChatMessage = 0x4505f8e1,
    TL_GeoChatMessageService = 0xd34fa24e,
    TL_GeochatsStatedMessage = 0x17b1578b,
    TL_GeochatsLocated = 0x48feb267,
    TL_GeochatsMessages = 0xd1526db1,
    TL_GeochatsMessagesSlice = 0xbc5863e8,
    TL_MessageActionGeoChatCreate = 0x6f038ebc,
    TL_MessageActionGeoChatCheckin = 0xc7d53de,
    TL_UpdateNewGeoChatMessage = 0x5a68e3f7,
    TL_UpdateServiceNotification = 0x382dd3e4,
    TL_WallPaperSolid = 0x63117f24,
    TL_UpdateNewEncryptedMessage = 0x12bcbd9a,
    TL_UpdateEncryptedChatTyping = 0x1710f156,
    TL_UpdateEncryption = 0xb4a2e88d,
    TL_UpdateEncryptedMessagesRead = 0x38fe25b7,
    TL_EncryptedChatEmpty = 0xab7ec0a0,
    TL_EncryptedChatWaiting = 0x3bf703dc,
    TL_EncryptedChatRequested = 0xc878527e,
    TL_EncryptedChat = 0xfa56ce36,
    TL_EncryptedChatDiscarded = 0x13d6dd27,
    TL_InputEncryptedChat = 0xf141b5e1,
    TL_EncryptedFileEmpty = 0xc21f497e,
    TL_EncryptedFile = 0x4a70994c,
    TL_InputEncryptedFileEmpty = 0x1837c364,
    TL_InputEncryptedFileUploaded = 0x64bd0306,
    TL_InputEncryptedFile = 0x5a17b5e5,
    TL_InputEncryptedFileLocation = 0xf5235d55,
    TL_EncryptedMessage = 0xed18c118,
    TL_EncryptedMessageService = 0x23734b06,
    TL_DecryptedMessageLayer = 0x1be31789,
    TL_DecryptedMessage_layer8 = 0x1f814f1f,
    TL_DecryptedMessage = 0x204d3878,
    TL_DecryptedMessageService_layer8 = 0xaa48327d,
    TL_DecryptedMessageService = 0x73164160,
    TL_DecryptedMessageMediaEmpty = 0x89f5c4a,
    TL_DecryptedMessageMediaPhoto = 0x32798a8c,
    TL_DecryptedMessageMediaVideo_layer8 = 0x4cee6ef3,
    TL_DecryptedMessageMediaVideo = 0x524a415d,
    TL_DecryptedMessageMediaGeoPoint = 0x35480a59,
    TL_DecryptedMessageMediaContact = 0x588a0a97,
    TL_DecryptedMessageMediaAudio_layer8 = 0x6080758f,
    TL_DecryptedMessageMediaAudio = 0x57e0a9cb,
    TL_DecryptedMessageActionSetMessageTTL = 0xa1733aec,
    TL_DecryptedMessageActionReadMessages = 0xc4f40be,
    TL_DecryptedMessageActionDeleteMessages = 0x65614304,
    TL_DecryptedMessageActionScreenshotMessages = 0x8ac1f475,
    TL_DecryptedMessageActionFlushHistory = 0x6719e45c,
    TL_DecryptedMessageActionResend = 0x511110b0,
    TL_DecryptedMessageActionNotifyLayer = 0xf3048883,
    TL_DecryptedMessageActionTyping = 0xccb27641,
    TL_MessagesDhConfigNotModified = 0xc0e24635,
    TL_MessagesDhConfig = 0x2c221edd,
    TL_MessagesSentEncryptedMessage = 0x560f8935,
    TL_MessagesSentEncryptedFile = 0x9493ff32,
    TL_InputFileBig = 0xfa4f0bb5,
    TL_InputEncryptedFileBigUploaded = 0x2dc173c8,
    TL_UpdateChatParticipantAdd = 0x3a0eeb22,
    TL_UpdateChatParticipantDelete = 0x6e5f8c22,
    TL_UpdateDcOptions = 0x8e5e9873,
    TL_InputMediaUploadedAudio = 0x4e498cab,
    TL_InputMediaAudio = 0x89938781,
    TL_InputMediaUploadedDocument = 0xffe76b78,
    TL_InputMediaUploadedThumbDocument = 0x41481486,
    TL_InputMediaDocument = 0xd184e841,
    TL_MessageMediaDocument = 0x2fda2204,
    TL_MessageMediaAudio = 0xc6b68300,
    TL_InputAudioEmpty = 0xd95adc84,
    TL_InputAudio = 0x77d440ff,
    TL_InputDocumentEmpty = 0x72f0eaae,
    TL_InputDocument = 0x18798952,
    TL_InputAudioFileLocation = 0x74dc404d,
    TL_InputDocumentFileLocation = 0x4e45abe9,
    TL_DecryptedMessageMediaDocument = 0xb095434b,
    TL_AudioEmpty = 0x586988d8,
    TL_Audio = 0xc7ac6496,
    TL_DocumentEmpty = 0x36f8c871,
    TL_Document = 0xf9a39f4f,
    TL_HelpSupport = 0x17c6b5f6,
    TL_InvokeAfterMsg = 0xcb9f372d,
    TL_InvokeAfterMsgs = 0x3dc4b4f0,
    TL_AuthCheckPhone = 0x6fe51dfb,
    TL_AuthSendCode = 0x768d5f4d,
    TL_AuthSendSms = 0xda9f3e8,
    TL_AuthSendCall = 0x3c51564,
    TL_AuthSignUp = 0x1b067634,
    TL_AuthSignIn = 0xbcd51581,
    TL_AuthLogOut = 0x5717da40,
    TL_AuthResetAuthorizations = 0x9fab0d1a,
    TL_AuthSendInvites = 0x771c1d97,
    TL_AuthExportAuthorization = 0xe5bfffcd,
    TL_AuthImportAuthorization = 0xe3ef9613,
    TL_AccountRegisterDevice = 0x446c712c,
    TL_AccountUnregisterDevice = 0x65c55b40,
    TL_AccountUpdateNotifySettings = 0x84be5b93,
    TL_AccountGetNotifySettings = 0x12b3ad31,
    TL_AccountResetNotifySettings = 0xdb7e1747,
    TL_AccountUpdateProfile = 0xf0888d68,
    TL_AccountUpdateStatus = 0x6628562c,
    TL_AccountGetWallPapers = 0xc04cfac2,
    TL_AccountCheckUsername = 0x2714d86c,
    TL_AccountUpdateUsername = 0x3e0bdd7c,
    TL_UsersGetUsers = 0xd91a548,
    TL_UsersGetFullUser = 0xca30a5b1,
    TL_ContactsGetStatuses = 0xc4a353ee,
    TL_ContactsGetContacts = 0x22c6aa08,
    TL_ContactsImportContacts = 0xda30b32d,
    TL_ContactsSearch = 0x11f812d8,
    TL_ContactsGetSuggested = 0xcd773428,
    TL_ContactsDeleteContact = 0x8e953744,
    TL_ContactsDeleteContacts = 0x59ab389e,
    TL_ContactsBlock = 0x332b49fc,
    TL_ContactsUnblock = 0xe54100bd,
    TL_ContactsGetBlocked = 0xf57c350f,
    TL_MessagesGetMessages = 0x4222fa74,
    TL_MessagesGetDialogs = 0xeccf1df6,
    TL_MessagesGetHistory = 0x92a1df2f,
    TL_MessagesSearch = 0x7e9f2ab,
    TL_MessagesReadHistory = 0xeed884c6,
    TL_MessagesReadMessageContents = 0x354b5bc2,
    TL_MessagesDeleteHistory = 0xf4f8fb61,
    TL_MessagesDeleteMessages = 0x14f2dd0a,
    TL_MessagesRestoreMessages = 0x395f9d7e,
    TL_MessagesReceivedMessages = 0x28abcb68,
    TL_MessagesSetTyping = 0xa3825e50,
    TL_MessagesSendMessage = 0x4cde0aab,
    TL_MessagesSendMedia = 0xa3c85d76,
    TL_MessagesForwardMessages = 0x514cd10f,
    TL_MessagesGetChats = 0x3c6aa187,
    TL_MessagesGetFullChat = 0x3b831c66,
    TL_MessagesEditChatTitle = 0xb4bc68b5,
    TL_MessagesEditChatPhoto = 0xd881821d,
    TL_MessagesAddChatUser = 0x2ee9ee9e,
    TL_MessagesDeleteChatUser = 0xc3c5cd23,
    TL_MessagesCreateChat = 0x419d9aee,
    TL_UpdatesGetState = 0xedd4882a,
    TL_UpdatesGetDifference = 0xa041495,
    TL_PhotosUpdateProfilePhoto = 0xeef579a0,
    TL_PhotosUploadProfilePhoto = 0xd50f9c88,
    TL_UploadSaveFilePart = 0xb304a621,
    TL_UploadGetFile = 0xe3a6cfb5,
    TL_HelpGetConfig = 0xc4f9186b,
    TL_HelpGetNearestDc = 0x1fb33026,
    TL_HelpGetAppUpdate = 0xc812ac7e,
    TL_HelpSaveAppLog = 0x6f02f748,
    TL_HelpGetInviteText = 0xa4a95186,
    TL_PhotosGetUserPhotos = 0xb7ee553c,
    TL_MessagesForwardMessage = 0x3f3f4f2,
    TL_MessagesSendBroadcast = 0x41bb0972,
    TL_GeochatsGetLocated = 0x7f192d8f,
    TL_GeochatsGetRecents = 0xe1427e6f,
    TL_GeochatsCheckin = 0x55b3e8fb,
    TL_GeochatsGetFullChat = 0x6722dd6f,
    TL_GeochatsEditChatTitle = 0x4c8e2273,
    TL_GeochatsEditChatPhoto = 0x35d81a95,
    TL_GeochatsSearch = 0xcfcdc44d,
    TL_GeochatsGetHistory = 0xb53f7a68,
    TL_GeochatsSetTyping = 0x8b8a729,
    TL_GeochatsSendMessage = 0x61b0044,
    TL_GeochatsSendMedia = 0xb8f0deff,
    TL_GeochatsCreateGeoChat = 0xe092e16,
    TL_MessagesGetDhConfig = 0x26cf8950,
    TL_MessagesRequestEncryption = 0xf64daf43,
    TL_MessagesAcceptEncryption = 0x3dbc0415,
    TL_MessagesDiscardEncryption = 0xedd923c5,
    TL_MessagesSetEncryptedTyping = 0x791451ed,
    TL_MessagesReadEncryptedHistory = 0x7f4b690a,
    TL_MessagesSendEncrypted = 0xa9776773,
    TL_MessagesSendEncryptedFile = 0x9a901b66,
    TL_MessagesSendEncryptedService = 0x32d439a4,
    TL_MessagesReceivedQueue = 0x55a5bb66,
    TL_UploadSaveBigFilePart = 0xde7b673d,
    TL_InitConnection = 0x69796de9,
    TL_HelpGetSupport = 0x9cdf08cd,
    //TL_InvokeWithLayer14 = 0x2b9b08fa,
    TL_InvokeWithLayer17 = 0x50858a19,
    TL_InvokeWithLayer18 = 0x1c900537,
    TL_InvokeWithLayer23 = 0xda9b0d0d
};

#endif // TLVALUES_H
