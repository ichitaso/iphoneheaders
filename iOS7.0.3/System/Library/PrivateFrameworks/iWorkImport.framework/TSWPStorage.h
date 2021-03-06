/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSDContainerInfo.h>
#import <iWorkImport/TSKSearchable.h>
#import <iWorkImport/TSSThemedObject.h>
#import <iWorkImport/TSWPStorageParent.h>
#import <iWorkImport/TSSStyleClient.h>
#import <iWorkImport/TSWPTextSource.h>

@protocol TSDContainerInfo, TSDOwningAttachment;
@class NSObject, TSPObject, NSMutableString, TSWPStorageBroadcaster, TSKDocumentRoot, TSSStylesheet, TSDInfoGeometry;

@interface TSWPStorage : TSPObject <TSDContainerInfo, TSKSearchable, TSSThemedObject, TSWPStorageParent, TSSStyleClient, TSWPTextSource> {

	NSObject<TSDContainerInfo>* _parentInfo;
	TSPObject<TSDOwningAttachment>* _owningAttachment;
	NSMutableString* _string;
	TSWPAttributeArray* _attributesTable[19];
	TSWPStorageBroadcaster* _broadcaster;
	TSKDocumentRoot* _documentRoot;
	TSSStylesheet* _stylesheet;
	int _WPKind;
	unsigned _disallowElementKinds;
	BOOL _dolcSuppressed;
	BOOL _delayBroadcast;
	NSRange _rangeToBroadcast;
	int _writingDirectionCache;
	BOOL _isInInit;
	unsigned _changeCount;
	BOOL _ignoreContentsChangedNotifications;

}

@property (assign,nonatomic,@dynamic) SCD_Struct_TS266 hyperlinkCellID; 
@property (nonatomic,readonly) BOOL hasTrackedChanges; 
@property (nonatomic,readonly) TSWPChangeAttributeArray* insertionChangesTable; 
@property (nonatomic,readonly) TSWPChangeAttributeArray* deletionChangesTable; 
@property (nonatomic,readonly) BOOL isInInit;                                                           //@synthesize isInInit=_isInInit - In the implementation block
@property (assign,nonatomic) BOOL ignoreContentsChangedNotifications;                                   //@synthesize ignoreContentsChangedNotifications=_ignoreContentsChangedNotifications - In the implementation block
@property (nonatomic,readonly) unsigned changeCount;                                                    //@synthesize changeCount=_changeCount - In the implementation block
@property (assign,nonatomic) BOOL matchesObjectPlaceholderGeometry; 
@property (nonatomic,copy) TSDInfoGeometry * geometry; 
@property (assign,nonatomic) NSObject<TSDContainerInfo> * parentInfo;                                   //@synthesize parentInfo=_parentInfo - In the implementation block
@property (assign,nonatomic) TSPObject<TSDOwningAttachment> * owningAttachment;                         //@synthesize owningAttachment=_owningAttachment - In the implementation block
@property (nonatomic,readonly) TSPObject<TSDOwningAttachment> * owningAttachmentNoRecurse; 
@property (getter=isFloatingAboveText,nonatomic,readonly) BOOL floatingAboveText; 
@property (getter=isAnchoredToText,nonatomic,readonly) BOOL anchoredToText; 
@property (getter=isInlineWithText,nonatomic,readonly) BOOL inlineWithText; 
@property (getter=isAttachedToBodyText,nonatomic,readonly) BOOL attachedToBodyText; 
@property (nonatomic,readonly) int contentWritingDirection; 
+(id)newObjectForUnarchiver:(id)arg1 ;
+(void)resetDisallowedElementKinds;
+(id)filterText:(id)arg1 removingAttachments:(BOOL)arg2 ;
+(Class)pStringClassForWPKind:(int)arg1 ;
+(void)setDisallowedElementKinds:(unsigned)arg1 forStorageKind:(int)arg2 ;
+(BOOL)allowsElementKind:(int)arg1 forStorageKind:(int)arg2 ;
+(id)filterText:(id)arg1 ;
+(id)filterMarkAttributes:(id)arg1 ;
+(TSWPAttributeArray*)createEmptyAttributeArrayForKind:(int)arg1 ;
+(TSWPAttributeArray*)createAttributeArrayForKind:(int)arg1 undoTransaction:(TSWPStorageTransaction*)arg2 ;
+(id)plainTextPasteStringForStorages:(id)arg1 forcePlainText:(BOOL)arg2 ;
+(void)initialize;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(void)acceptVisitor:(id)arg1 ;
-(id)initWithContext:(id)arg1 string:(id)arg2 kind:(int)arg3 stylesheet:(id)arg4 paragraphStyle:(id)arg5 listStyle:(id)arg6 section:(id)arg7 columnStyle:(id)arg8 ;
-(void)addSmartField:(id)arg1 toRange:(NSRange)arg2 dolcContext:(id)arg3 undoTransaction:(TSWPStorageTransaction*)arg4 ;
-(void)setCharacterStyle:(id)arg1 range:(NSRange)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(id)initWithContext:(id)arg1 string:(id)arg2 stylesheet:(id)arg3 kind:(int)arg4 ;
-(void)insertStorage:(id)arg1 atCharIndex:(unsigned)arg2 dolcContext:(id)arg3 undoTransaction:(TSWPStorageTransaction*)arg4 ;
-(id)paragraphStyleAtParIndex:(unsigned)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)characterStyleAtCharIndex:(unsigned)arg1 effectiveRange:(NSRange*)arg2 ;
-(int)wpKind;
-(NSRange)textRangeForParagraphAtIndex:(unsigned)arg1 ;
-(void)setParagraphStyle:(id)arg1 forCharRange:(NSRange)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(void)insertString:(id)arg1 atCharIndex:(unsigned)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(NSRange)replaceCharactersInRange:(NSRange)arg1 withStorage:(id)arg2 usePasteRules:(BOOL)arg3 dolcContext:(id)arg4 undoTransaction:(TSWPStorageTransaction*)arg5 ;
-(NSRange)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(BOOL)canBeStoredInAStringValueCell;
-(id)newSubstorageWithRange:(NSRange)arg1 context:(id)arg2 flags:(unsigned)arg3 ;
-(void)uppercaseWithUndoTransaction:(TSWPStorageTransaction*)arg1 locale:(id)arg2 ;
-(void)lowercaseWithUndoTransaction:(TSWPStorageTransaction*)arg1 locale:(id)arg2 ;
-(void)capitalizeWithUndoTransaction:(TSWPStorageTransaction*)arg1 locale:(id)arg2 ;
-(id)paragraphStyleAtCharIndex:(unsigned)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)enumerateWithAttributeKind:(int)arg1 inRange:(NSRange)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(id)referencedStyles;
-(void)replaceReferencedStylesUsingBlock:(/*^block*/ id)arg1 ;
-(id)referencedStylesOfClass:(Class)arg1 ;
-(void)setParagraphWritingDirection:(int)arg1 forCharRange:(NSRange)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(id)rangesForLocalization;
-(NSRange)attachmentIndexRangeForTextRange:(NSRange)arg1 ;
-(NSRange)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 notifyObservers:(BOOL)arg3 undoTransaction:(TSWPStorageTransaction*)arg4 ;
-(unsigned)characterStyleAttributeCount;
-(id)listStyleAtParIndex:(unsigned)arg1 effectiveRange:(NSRange*)arg2 ;
-(BOOL)isThemeContent;
-(id)parentInfo;
-(Class)repClass;
-(id)owningAttachment;
-(id)childInfos;
-(id)childCommandForApplyThemeCommand:(id)arg1 ;
-(id)commandForTransformingByTransform:(CGAffineTransform)arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(CGRect)arg4 ;
-(void)setParentInfo:(id)arg1 ;
-(void)setOwningAttachment:(id)arg1 ;
-(id)owningAttachmentNoRecurse;
-(BOOL)isFloatingAboveText;
-(BOOL)isAnchoredToText;
-(BOOL)isInlineWithText;
-(BOOL)isAttachedToBodyText;
-(id)searchForString:(id)arg1 options:(unsigned)arg2 onHit:(/*^block*/ id)arg3 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(NSRange)rangeOfString:(id)arg1 searchOptions:(unsigned)arg2 updatingSearchRange:(NSRange*)arg3 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(id)searchForAnnotationsWithHitBlock:(/*^block*/ id)arg1 ;
-(void)continueSearch:(id)arg1 ;
-(id)childCommandForReplaceAllCommand:(id)arg1 ;
-(id)i_copyIntoContext:(id)arg1 stylesheet:(id)arg2 paragraphStyle:(id)arg3 listStyle:(id)arg4 bakeModes:(BOOL)arg5 resettingHostTableToMatch:(id)arg6 referenceColorHelper:(id)arg7 ;
-(id)attachmentAtAttachmentIndex:(unsigned)arg1 outCharIndex:(unsigned*)arg2 ;
-(void)deleteRange:(NSRange)arg1 undoTransaction:(TSWPStorageTransaction*)arg2 ;
-(NSRange)insertAttachmentOrFootnote:(id)arg1 range:(NSRange)arg2 ;
-(id)p_processEndNode:(id)arg1 startNode:(id)arg2 bakeModes:(BOOL)arg3 tokenDict:(id)arg4 ;
-(void)takeText:(id)arg1 andSetLanguage:(id)arg2 ;
-(void)setLanguage:(id)arg1 forCharRange:(NSRange)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(id)attachmentAtCharIndex:(unsigned)arg1 ;
-(BOOL)beginsWithFormulaEqualsToken;
-(id)stringWithFormulaPlainTextFromRange:(NSRange)arg1 ;
-(id)i_copyIntoContext:(id)arg1 stylesheet:(id)arg2 ;
-(void)takeText:(id)arg1 ;
-(void)insertUIGraphicalAttachment:(id)arg1 ;
-(BOOL)isEmptyExceptForFormulaEqualsToken;
-(id)stringWithFormulaPlainText;
-(unsigned)attachmentCount;
-(NSRange)rangeForCellID:(SCD_Struct_TS266)arg1 includingBreak:(BOOL)arg2 ;
-(id)newSubstorageWithRange:(NSRange)arg1 context:(id)arg2 flags:(unsigned)arg3 kind:(int)arg4 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(BOOL)autoListRecognition;
-(BOOL)autoListTermination;
-(BOOL)textIsVertical;
-(int)contentWritingDirection;
-(id)trackerForController:(id)arg1 ;
-(TSWPAttributeArray*)attributeArrayForKind:(int)arg1 ;
-(int)writingDirectionForParagraphAtCharIndex:(unsigned)arg1 ;
-(unsigned)characterCount;
-(NSRange)insertAttachmentOrFootnote:(id)arg1 range:(NSRange)arg2 dolcContext:(id)arg3 undoTransaction:(TSWPStorageTransaction*)arg4 changeSession:(id)arg5 ;
-(SCD_Struct_TS266)hyperlinkCellID;
-(BOOL)hasAttachmentsThatChangeWithPageNumberOrPageCount;
-(TSWPAttributeArray*)attributeArrayForKind:(int)arg1 withCreate:(BOOL)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(BOOL)changesWithPageCount;
-(void)stashBroadcaster;
-(void)unstashBroadcaster;
-(void)setHyperlinkCellID:(SCD_Struct_TS266)arg1 ;
-(void)appendStoragePreservingEmphasis:(id)arg1 dolcContext:(id)arg2 undoTransaction:(TSWPStorageTransactionRef)arg3 parentCommand:(id)arg4 ;
-(id)initWithContext:(id)arg1 string:(id)arg2 kind:(int)arg3 stylesheet:(id)arg4 paragraphStyle:(id)arg5 listStyle:(id)arg6 section:(id)arg7 columnStyle:(id)arg8 paragraphDirection:(int)arg9 ;
-(void)enumerateSmartFieldsWithAttributeKind:(int)arg1 inRange:(NSRange)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(void)enumerateAttachmentsOfClass:(Class)arg1 inTextRange:(NSRange)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(NSRange)paragraphIndexRangeForCharRange:(NSRange)arg1 ;
-(void)paragraphFlags:(unsigned short*)arg1 andLevel:(unsigned*)arg2 atCharIndex:(unsigned)arg3 ;
-(void)applyFlags:(unsigned short)arg1 level:(unsigned)arg2 toParagraphIndexRange:(NSRange)arg3 forKind:(int)arg4 undoTransaction:(TSWPStorageTransaction*)arg5 ;
-(id)hiddenRangesInRange:(NSRange)arg1 ;
-(void)enumerateAttachmentsInTextRange:(NSRange)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(NSRange)charRangeMappedFromStorage:(NSRange)arg1 ;
-(NSRange)charRangeMappedToStorage:(NSRange)arg1 ;
-(unsigned)charIndexMappedToStorage:(unsigned)arg1 ;
-(unsigned)charIndexMappedFromStorage:(unsigned)arg1 ;
-(void)p_didChangeRange:(NSRange)arg1 delta:(int)arg2 broadcastKind:(int)arg3 ;
-(unsigned)paragraphIndexAtCharIndex:(unsigned)arg1 ;
-(TSWPParagraphEnumerator)paragraphEnumeratorAtCharIndex:(unsigned)arg1 styleProvider:(id)arg2 ;
-(BOOL)isInInit;
-(void)setListStart:(unsigned)arg1 forCharRange:(NSRange)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(id)listStyleAtCharIndex:(unsigned)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)setListStyle:(id)arg1 forCharRange:(NSRange)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(unsigned)paragraphLevelAtParIndex:(unsigned)arg1 ;
-(void)setParagraphLevel:(unsigned)arg1 forCharRange:(NSRange)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(int)writingDirectionForParagraphAtParIndex:(unsigned)arg1 ;
-(void)insertObject:(id)arg1 charIndex:(unsigned)arg2 attributeArray:(TSWPAttributeArray*)arg3 attributeIndex:(unsigned)arg4 dolcContext:(id)arg5 undoTransaction:(TSWPStorageTransaction*)arg6 ;
-(void)insertParagraphData:(SCD_Struct_TS561)arg1 charIndex:(unsigned)arg2 attributeArray:(TSWPAttributeArray*)arg3 attributeIndex:(unsigned)arg4 undoTransaction:(TSWPStorageTransaction*)arg5 ;
-(BOOL)supportsSections;
-(id)pDefaultSectionForContext:(id)arg1 ;
-(BOOL)supportsColumnStyles;
-(TSWPParagraphAttributeArray*)paragraphAttributeArrayForKind:(int)arg1 withCreate:(BOOL)arg2 ;
-(unsigned)listStartAtCharIndex:(unsigned)arg1 ;
-(void)compress:(TSWPStorageTransaction*)arg1 ;
-(BOOL)p_shouldAcceptChangesForRange:(NSRange)arg1 removeDeletedText:(BOOL*)arg2 ;
-(void)saveRange:(NSRange)arg1 toArchiver:(id)arg2 styleProvider:(id)arg3 archiveChanges:(BOOL)arg4 removeDeletedText:(BOOL)arg5 ;
-(BOOL)hasTrackedChanges;
-(void)filterInvalidContentForStorage:(id)arg1 undoTransaction:(TSWPStorageTransaction*)arg2 ;
-(unsigned)disallowedElementKinds;
-(BOOL)supportsSectionCopying;
-(void)filterSectionBreaksFromStorage:(id)arg1 undoTransaction:(TSWPStorageTransaction*)arg2 ;
-(BOOL)allowsElementKind:(int)arg1 ;
-(unsigned)footnoteCount;
-(id)footnoteAtFootnoteIndex:(unsigned)arg1 outCharIndex:(unsigned*)arg2 ;
-(void)removeSmartField:(id)arg1 fromRange:(NSRange)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(TSWPParagraphEnumerator)paragraphEnumeratorForCharRange:(NSRange)arg1 styleProvider:(id)arg2 ;
-(TSWPParagraphEnumerator)paragraphEnumeratorForCharRange:(NSRange)arg1 styleProvider:(id)arg2 requireHidden:(BOOL)arg3 ;
-(NSRange)selectionRangeForCharIndex:(unsigned)arg1 ;
-(unsigned)previousCharacterIndex:(unsigned)arg1 forDelete:(BOOL)arg2 ;
-(NSRange)textRangeForParagraphAtCharIndex:(unsigned)arg1 ;
-(BOOL)isAllWhitespaceInRange:(NSRange)arg1 ;
-(NSRange)whiteSpaceRangeAtCharIndex:(unsigned)arg1 includingBreaks:(BOOL)arg2 ;
-(NSRange)rangeForSelectionAtCharIndex:(unsigned)arg1 caretIndex:(unsigned)arg2 ;
-(NSRange)rangeByExtendingRangeToWhitespace:(NSRange)arg1 skipVisibleDeleted:(BOOL)arg2 ;
-(id)deletedRangesInRange:(NSRange)arg1 ;
-(id)changeAtCharIndex:(unsigned)arg1 attributeKind:(int)arg2 effectiveRange:(NSRange*)arg3 ;
-(NSRange)whiteSpaceRangeAtCharIndex:(unsigned)arg1 ;
-(NSRange)wordAtCharIndex:(unsigned)arg1 includePreviousWord:(BOOL)arg2 ;
-(id)attachmentOrFootnoteAtCharIndex:(unsigned)arg1 ;
-(void)p_attributesAtCharIndex:(unsigned)arg1 attributesOfInterest:(BOOL)arg2 attributesTable:(id)arg3 effectiveRange:(NSRange*)arg4 ;
-(NSRange)p_RelocateNonSelectedAnchorsInRange:(NSRange)arg1 selectionInfos:(id)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(BOOL)setDOLCSuppressed:(BOOL)arg1 ;
-(NSRange)p_replaceCharactersInLogicalSelection:(id)arg1 withString:(id)arg2 withFlags:(unsigned)arg3 replaceTextData:(SCD_Struct_TS562*)arg4 changeSession:(id)arg5 undoTransaction:(TSWPStorageTransaction*)arg6 outInsertedRange:(NSRange*)arg7 ;
-(id)relocateNonSelectedAnchorsInSelection:(id)arg1 undoTransaction:(TSWPStorageTransaction*)arg2 ;
-(id)p_replacementsForSelection:(id)arg1 withString:(id)arg2 changeSession:(id)arg3 shouldTrackDeletions:(BOOL)arg4 ;
-(void)p_replaceCharactersInSelection:(id)arg1 withString:(id)arg2 length:(unsigned)arg3 undoTransaction:(TSWPStorageTransaction*)arg4 ;
-(void)setDictationAndAutocorrection:(id)arg1 forCharRange:(NSRange)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(id)changeDetailsForChange:(id)arg1 withRange:(NSRange)arg2 ;
-(void)p_findChangesInRange:(NSRange)arg1 onHit:(/*^block*/ id)arg2 withAttributeKind:(int)arg3 ;
-(id)searchInRange:(NSRange)arg1 forString:(id)arg2 options:(unsigned)arg3 onHit:(/*^block*/ id)arg4 ;
-(void)findCommentsInRange:(NSRange)arg1 onHit:(/*^block*/ id)arg2 ;
-(void)findChangesInRange:(NSRange)arg1 onHit:(/*^block*/ id)arg2 ;
-(BOOL)canUserReplaceText;
-(NSRange)replaceAllOccurrencesOfObject:(id)arg1 withObject:(id)arg2 forKind:(int)arg3 undoTransaction:(TSWPStorageTransaction*)arg4 ;
-(NSRange)textRangeForListAtCharIndex:(unsigned)arg1 ;
-(unsigned)listEndAtCharIndex:(unsigned)arg1 ;
-(TSWPParagraphEnumerator)paragraphEnumeratorAtParIndex:(unsigned)arg1 styleProvider:(id)arg2 ;
-(unsigned)paragraphEndAtCharIndex:(unsigned)arg1 ;
-(unsigned)paragraphLevelAtCharIndex:(unsigned)arg1 ;
-(BOOL)isWritingDirectionRightToLeftForParagraphAtParIndex:(unsigned)arg1 ;
-(unsigned)firstParIndexInListAtParIndex:(unsigned)arg1 ;
-(void)applyWritingDirection:(long)arg1 toParagraphIndexRange:(NSRange)arg2 forKind:(int)arg3 undoTransaction:(TSWPStorageTransaction*)arg4 ;
-(void)applyObject:(id)arg1 toCharRange:(NSRange)arg2 forKind:(int)arg3 dolcContext:(id)arg4 undoTransaction:(TSWPStorageTransaction*)arg5 ;
-(id)bestCharacterLanguageForTextRange:(NSRange)arg1 ;
-(id)languageForTextRange:(NSRange)arg1 useStringTokenizer:(BOOL)arg2 useCreationLanguage:(BOOL)arg3 ;
-(void)applyObject:(id)arg1 toParagraphIndexRange:(NSRange)arg2 forKind:(int)arg3 undoTransaction:(TSWPStorageTransaction*)arg4 ;
-(void)applyObject:(id)arg1 toParagraphsInCharRange:(NSRange)arg2 forKind:(int)arg3 undoTransaction:(TSWPStorageTransaction*)arg4 ;
-(unsigned)listNumberForParagraphEnumerator:(const TSWPParagraphEnumerator*)arg1 numberingData:(SCD_Struct_TS563*)arg2 ;
-(void)applyDataValue:(unsigned long)arg1 toParagraphIndexRange:(NSRange)arg2 forKind:(int)arg3 undoTransaction:(TSWPStorageTransaction*)arg4 ;
-(void)applyFlags:(unsigned short)arg1 level:(unsigned)arg2 toParagraphsInCharRange:(NSRange)arg3 undoTransaction:(TSWPStorageTransaction*)arg4 ;
-(unsigned short)paragraphFlagsAtCharIndex:(unsigned)arg1 ;
-(id)characterStyleAtCharIndex:(unsigned)arg1 left:(BOOL)arg2 effectiveRange:(NSRange*)arg3 ;
-(id)columnStyleAtCharIndex:(unsigned)arg1 effectiveRange:(NSRange*)arg2 ;
-(BOOL)hasColumnStyleForParagraphBreakAtCharIndex:(unsigned)arg1 ;
-(BOOL)hasSectionForParagraphBreakAtCharIndex:(unsigned)arg1 ;
-(id)columnStyleAtColumnStyleIndex:(unsigned)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)styleDidChangeInRange:(NSRange)arg1 ;
-(id)sectionAtSectionIndex:(unsigned)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)splitSmartFieldAtCharIndex:(unsigned)arg1 lengthToInsert:(unsigned)arg2 dolcContext:(id)arg3 undoTransaction:(TSWPStorageTransaction*)arg4 ;
-(NSRange)insertSpecialCharacter:(unsigned short)arg1 object:(id)arg2 kind:(int)arg3 range:(NSRange)arg4 dolcContext:(id)arg5 undoTransaction:(TSWPStorageTransaction*)arg6 changeSession:(id)arg7 ;
-(NSRange)footnoteRangeForTextRange:(NSRange)arg1 ;
-(unsigned)footnoteIndexForFootnote:(id)arg1 ;
-(NSRange)attachmentRangeForCharIndex:(unsigned)arg1 forwards:(BOOL)arg2 attributeKind:(int)arg3 ;
-(id)smartFieldAtCharIndex:(unsigned)arg1 attributeKind:(int)arg2 effectiveRange:(NSRange*)arg3 ;
-(NSRange)p_extendRangeToIncludeSmartFields:(NSRange)arg1 ;
-(NSRange)textRangeForParagraphsInCharRange:(NSRange)arg1 ;
-(BOOL)hasSmartFieldsInRange:(NSRange)arg1 ;
-(id)smartFieldsWithAttributeKind:(int)arg1 intersectingRange:(NSRange)arg2 passingTest:(/*^block*/ id)arg3 ;
-(CTFontRef)createFontAtCharIndex:(unsigned)arg1 scaleTextPercent:(unsigned)arg2 effectiveRange:(NSRange*)arg3 styleProvider:(id)arg4 ;
-(id)newSubstorageWithRange:(NSRange)arg1 storageContext:(id)arg2 objectsContext:(id)arg3 flags:(unsigned)arg4 kind:(int)arg5 ;
-(void)p_mutateByWordWithUndoTransaction:(TSWPStorageTransaction*)arg1 locale:(id)arg2 transformer:(/*^block*/ id)arg3 ;
-(BOOL)p_hasGoodAttributesForPlainTextPaste;
-(id)newSubstorageWithRange:(NSRange)arg1 storageContext:(id)arg2 objectsContext:(id)arg3 flags:(unsigned)arg4 ;
-(id)sectionAtCharIndex:(unsigned)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)setParagraphFlags:(unsigned short)arg1 level:(unsigned)arg2 forCharRange:(NSRange)arg3 undoTransaction:(TSWPStorageTransaction*)arg4 ;
-(void)transferAttributeArraySource:(TSWPAttributeArray*)arg1 forSourceRange:(NSRange)arg2 toDestStorage:(id)arg3 objectContext:(id)arg4 dolcContext:(id)arg5 flags:(int)arg6 ;
-(int)compareAttributeArray:(TSWPAttributeArray*)arg1 range:(NSRange)arg2 otherStorage:(id)arg3 otherRange:(NSRange)arg4 ;
-(BOOL)hasColumnBreakAtCharIndex:(unsigned)arg1 ;
-(void)attributesAtCharIndex:(unsigned)arg1 attributesOfInterest:(BOOL)arg2 attributesTable:(id)arg3 effectiveRange:(NSRange*)arg4 ;
-(id)smartFieldsWithAttributeKind:(int)arg1 intersectingRange:(NSRange)arg2 ;
-(id)footnoteReferenceAtCharIndex:(unsigned)arg1 ;
-(BOOL)isWritingDirectionRightToLeftForParagraphAtCharIndex:(unsigned)arg1 ;
-(long)hyphenationLocationBeforeIndex:(long)arg1 inRange:(NSRange)arg2 locale:(CFLocaleRef)arg3 hyphenChar:(unsigned*)arg4 ;
-(id)objectAtLocationPriorToMappedCharIndex:(unsigned)arg1 forAttributeKind:(int)arg2 effectiveRange:(NSRange*)arg3 ;
-(unsigned)charIndexRemappedFromStorage:(unsigned)arg1 ;
-(BOOL)adjustRangesByDelta:(int)arg1 ;
-(unsigned)storageLength;
-(void)unarchiverAppendParagraphBreak:(unsigned short)arg1 ;
-(void)setWPKind:(int)arg1 undoTransaction:(TSWPStorageTransaction*)arg2 ;
-(void)addDisallowedElementKind:(int)arg1 ;
-(void)removeDisallowedElementKind:(int)arg1 ;
-(id)textSourceForLayoutInRange:(NSRange)arg1 ;
-(BOOL)isDOLCSuppressed;
-(id)stringForStatisticsInRange:(NSRange)arg1 ;
-(unsigned)previousCharacterIndex:(unsigned)arg1 ;
-(unsigned)nextCharacterIndex:(unsigned)arg1 ;
-(unsigned)indexForCharacter:(unsigned short)arg1 startCharIndex:(unsigned)arg2 ;
-(unsigned)selectedParagraphBreakCount:(NSRange)arg1 ;
-(unsigned)emptyParagraphCount:(NSRange)arg1 ;
-(BOOL)isWholeParagraphsForRange:(NSRange)arg1 ignoreAttachmentCharacters:(BOOL)arg2 requireParagraphBreakSelected:(BOOL)arg3 ;
-(BOOL)isEmptyParagraphSelection:(id)arg1 outRange:(NSRange*)arg2 ;
-(NSRange)rangeForSelecting:(id)arg1 ;
-(NSRange)rangeByExtendingRangeToWhitespace:(NSRange)arg1 ;
-(NSRange)rangeByExtendingRangeToLineBreak:(NSRange)arg1 ;
-(NSRange)scanLeftForWordAtCharIndex:(unsigned)arg1 ;
-(NSRange)rangeForSelectionAtCharIndex:(unsigned)arg1 includePreviousWord:(BOOL)arg2 ;
-(NSRange)rangeByExpandingToIncludePartialWords:(NSRange)arg1 ;
-(NSRange)rangeByTrimmingRange:(NSRange)arg1 withBlock:(/*^block*/ id)arg2 ;
-(id)objectAtLocationAtExactCharIndex:(unsigned)arg1 forAttributeKind:(int)arg2 ;
-(id)extendSelectionForTopicChildren:(id)arg1 ;
-(NSRange)replaceCharactersInSelection:(id)arg1 withString:(id)arg2 withFlags:(unsigned)arg3 replaceTextData:(SCD_Struct_TS562*)arg4 changeSession:(id)arg5 undoTransaction:(TSWPStorageTransaction*)arg6 outInsertedRange:(NSRange*)arg7 ;
-(id)substringWithSelection:(id)arg1 ;
-(NSRange)rangeOfString:(id)arg1 searchOptions:(unsigned)arg2 range:(NSRange)arg3 ;
-(NSRange)rangeOfParagraphBreakingCharacter:(unsigned short)arg1 backwards:(BOOL)arg2 range:(NSRange)arg3 ;
-(NSRange)rangeOfAnnotationWithOptions:(unsigned)arg1 range:(NSRange)arg2 ;
-(NSRange)rangeForHighlight:(id)arg1 ;
-(NSRange)replaceAllOccurrencesOfStyle:(id)arg1 withStyle:(id)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(BOOL)styleOverridesAppliedToRange:(NSRange)arg1 ;
-(NSRange)textRangeForListsInCharRange:(NSRange)arg1 ;
-(unsigned)paragraphStartAtCharIndex:(unsigned)arg1 ;
-(BOOL)paragraphHasListLabelAtCharIndex:(unsigned)arg1 ;
-(BOOL)isWritingDirectionRightToLeftForListAtParIndex:(unsigned)arg1 ;
-(id)languageAtParIndex:(unsigned)arg1 useStringTokenizer:(BOOL)arg2 useCreationLanguage:(BOOL)arg3 ;
-(id)dictationAndAutocorrectionKeyAtCharIndex:(unsigned)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)addAllDictationAndAutocorrectionKeyRangesInRange:(NSRange)arg1 toRanges:(TSWPRangeVector*)arg2 ;
-(void)setParagraphStyle:(id)arg1 atParIndex:(unsigned)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(unsigned)findNextParagraphStyleChange:(unsigned)arg1 maxCharIndex:(unsigned)arg2 ;
-(void)enumerateParagraphsIntersectingTextRange:(NSRange)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(BOOL)supportsListStyles;
-(unsigned)listStyleCount;
-(void)setListStyle:(id)arg1 atParIndex:(unsigned)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(unsigned)listNumberForParagraphIndex:(unsigned)arg1 numberingData:(SCD_Struct_TS563*)arg2 ;
-(void)setParagraphFlags:(unsigned short)arg1 forCharRange:(NSRange)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(void)setParagraphLevel:(unsigned)arg1 atParIndex:(unsigned)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(id)valueForProperty:(int)arg1 atCharIndex:(unsigned)arg2 effectiveRange:(NSRange*)arg3 ;
-(unsigned)columnStyleCount;
-(void)setColumnStyle:(id)arg1 forCharRange:(NSRange)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(void)invalidateForStyle:(id)arg1 ;
-(void)replaceSectionAtSectionIndex:(unsigned)arg1 withSection:(id)arg2 dolcContext:(id)arg3 undoTransaction:(TSWPStorageTransaction*)arg4 ;
-(unsigned)sectionIndexForCharIndex:(unsigned)arg1 ;
-(unsigned)sectionIndexForSection:(id)arg1 ;
-(NSRange)insertSection:(id)arg1 atCharIndex:(unsigned)arg2 dolcContext:(id)arg3 undoTransaction:(TSWPStorageTransaction*)arg4 changeSession:(id)arg5 ;
-(void)appendSection:(id)arg1 charIndex:(unsigned)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(unsigned)footnoteIndexForCharIndex:(unsigned)arg1 ;
-(id)footnoteReferenceAttachmentOrFootnoteMarkAttachmentAtCharIndex:(unsigned)arg1 ;
-(id)footnoteMarkAtCharIndex:(unsigned)arg1 ;
-(unsigned)autoNumberFootnoteCountForRange:(NSRange)arg1 ;
-(unsigned)footnoteIndexForFootnoteStorage:(id)arg1 ;
-(id)footnoteStorages;
-(unsigned)findCharIndexForFootnoteAttachment:(id)arg1 ;
-(void)invalidateFootnoteAttachmentCharIndexes;
-(void)invalidatePageCountAttachmentCharIndexes:(BOOL)arg1 ;
-(void)invalidateCharIndexForAttachment:(id)arg1 ;
-(unsigned)findCharacterIndexForContainedInfo:(id)arg1 ;
-(unsigned)attachmentIndexAtCharIndex:(unsigned)arg1 ;
-(void)replaceWithAttachment:(id)arg1 forAttachmentIndex:(unsigned)arg2 dolcContext:(id)arg3 undoTransaction:(TSWPStorageTransaction*)arg4 ;
-(unsigned)attachmentIndexForInsertionAtCharIndex:(unsigned)arg1 ;
-(unsigned)findCharIndexForAttachment:(id)arg1 ;
-(NSRange)attachmentRangeForCharIndex:(unsigned)arg1 forwards:(BOOL)arg2 ;
-(BOOL)anchoredDrawableAttachmentCharacterAtCharIndex:(unsigned)arg1 ;
-(id)extendSelectionToIncludeSmartFields:(id)arg1 ;
-(id)editableSmartFieldAtCharIndex:(unsigned)arg1 effectiveRange:(NSRange*)arg2 ;
-(BOOL)hasSmartFields;
-(void)smartFieldDidChange:(id)arg1 ;
-(void)autoUpdateField:(id)arg1 withRange:(NSRange)arg2 documentRoot:(id)arg3 returningInsertedRange:(NSRange*)arg4 ;
-(void)autoUpdateSmartFieldsWithDocumentRoot:(id)arg1 ;
-(void)addGlyphVariantData:(id)arg1 toRange:(NSRange)arg2 ;
-(void)removeGlyphVariantDataFromRange:(NSRange)arg1 ;
-(id)glyphVariantDataAtCharIndex:(unsigned)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)fixGlyphVariantFontsForRange:(NSRange)arg1 ;
-(id)fontNameAtCharIndex:(unsigned)arg1 size:(float*)arg2 effectiveRange:(NSRange*)arg3 styleProvider:(id)arg4 ;
-(BOOL)hasVisibleText;
-(BOOL)canPasteAsPlainText;
-(BOOL)canPasteAsPlainTextWithUniformParagraphs;
-(unsigned)selectionRangeMinForCharIndex:(unsigned)arg1 ;
-(unsigned)selectionRangeMaxForCharIndex:(unsigned)arg1 ;
-(int)compareRange:(NSRange)arg1 otherStorage:(id)arg2 otherRange:(NSRange)arg3 options:(unsigned)arg4 ;
-(BOOL)ignoreContentsChangedNotifications;
-(void)setIgnoreContentsChangedNotifications:(BOOL)arg1 ;
-(void)splitSmartFieldAtCharIndex:(unsigned)arg1 lengthToInsert:(unsigned)arg2 attributeKind:(int)arg3 dolcContext:(id)arg4 undoTransaction:(TSWPStorageTransaction*)arg5 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 options:(unsigned)arg3 changedRange:(NSRange*)arg4 changeDelta:(int*)arg5 undoTransaction:(TSWPStorageTransaction*)arg6 changeSession:(id)arg7 ;
-(id)valueForBIUProperties:(id)arg1 selection:(id)arg2 insertionStyle:(id)arg3 ;
-(BOOL)p_passesExtraTablesChecksForStoringInAStringValueCell;
-(id)valueForBIUProperties:(id)arg1 ;
-(BOOL)hasHiddenTextAtCharIndex:(unsigned)arg1 ;
-(TSWPAttributeArray*)attributeArrayForKind:(int)arg1 withCreate:(BOOL)arg2 fromUndo:(BOOL)arg3 undoTransaction:(TSWPStorageTransaction*)arg4 ;
-(void)compressAttributeArrayKind:(int)arg1 undoTransaction:(TSWPStorageTransaction*)arg2 ;
-(void)lowLevelApplyObject:(id)arg1 toCharRange:(NSRange)arg2 forKind:(int)arg3 dolcContext:(id)arg4 undoTransaction:(TSWPStorageTransaction*)arg5 ;
-(int)compareAttributeArray1:(TSWPAttributeArray*)arg1 array2:(TSWPAttributeArray*)arg2 range1:(NSRange)arg3 range2:(NSRange)arg4 attributeIndex1:(unsigned)arg5 attributeIndex2:(unsigned)arg6 ;
-(id)pOverrideObjectBeforeReplacingCharactersInRange:(NSRange)arg1 withString:(id)arg2 withInsertionBehavior:(int)arg3 ;
-(id)pFindValidInsertionCharStyleFromCharIndex:(unsigned)arg1 ;
-(void)pApplyOverrideObjectAfterReplacingCharactersInRange:(NSRange)arg1 withString:(id)arg2 overrideObject:(id)arg3 undoTransaction:(TSWPStorageTransaction*)arg4 ;
-(id)pOverrideObjectBeforeReplacingCharactersInSelection:(id)arg1 withString:(id)arg2 ;
-(void)pApplyOverrideObjectAfterReplacingCharactersInSelection:(id)arg1 withString:(id)arg2 overrideObject:(id)arg3 undoTransaction:(TSWPStorageTransaction*)arg4 ;
-(id)defaultSectionForContext:(id)arg1 ;
-(void)p_fillMarkers:(vector<std::__1::pair<unsigned int, unsigned short>, std::__1::allocator<std::__1::pair<unsigned int, unsigned short> > >*)arg1 string:(id)arg2 length:(unsigned)arg3 hasAttachments:(BOOL*)arg4 hasFootnotes:(BOOL*)arg5 hasBreaks:(BOOL*)arg6 ;
-(void)p_lowLevelReplaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 length:(unsigned)arg3 undoTransaction:(TSWPStorageTransaction*)arg4 ;
-(TSWPChangeAttributeArray*)deletionChangesTable;
-(void)p_fillMarkers:(vector<unsigned int, std::__1::allocator<unsigned int> >*)arg1 startingAtCharIndex:(unsigned)arg2 forCount:(unsigned)arg3 ;
-(NSRange)replaceCharactersInSelection:(id)arg1 withStorage:(id)arg2 usePasteRules:(BOOL)arg3 dolcContext:(id)arg4 changeSession:(id)arg5 undoTransaction:(TSWPStorageTransaction*)arg6 ;
-(unsigned)indexAfterLastVisibleCharInRange:(NSRange)arg1 ;
-(void)undoReplaceText:(const TSWPStorageTransactionObject*)arg1 undoTransaction:(TSWPStorageTransaction*)arg2 notificationDelta:(int*)arg3 notificationRange:(NSRange*)arg4 ;
-(void)undoInsertAttribute:(const TSWPStorageTransactionObject*)arg1 undoTransaction:(TSWPStorageTransaction*)arg2 notificationRange:(NSRange*)arg3 ;
-(void)undoDeleteAttribute:(const TSWPStorageTransactionObject*)arg1 undoTransaction:(TSWPStorageTransaction*)arg2 notificationRange:(NSRange*)arg3 ;
-(void)undoAdjustCharIndexes:(const TSWPStorageTransactionObject*)arg1 undoTransaction:(TSWPStorageTransaction*)arg2 notificationRange:(NSRange*)arg3 ;
-(void)undoReplaceCharIndex:(const TSWPStorageTransactionObject*)arg1 undoTransaction:(TSWPStorageTransaction*)arg2 notificationRange:(NSRange*)arg3 ;
-(void)undoReplaceObject:(const TSWPStorageTransactionObject*)arg1 undoTransaction:(TSWPStorageTransaction*)arg2 notificationRange:(NSRange*)arg3 ;
-(void)undoReplaceParagraphData:(const TSWPStorageTransactionObject*)arg1 undoTransaction:(TSWPStorageTransaction*)arg2 notificationRange:(NSRange*)arg3 ;
-(void)undoDOLC:(const TSWPStorageTransactionObject*)arg1 undoTransaction:(TSWPStorageTransaction*)arg2 notificationRange:(NSRange*)arg3 ;
-(void)undoCTDate:(const TSWPStorageTransactionObject*)arg1 undoTransaction:(TSWPStorageTransaction*)arg2 notificationRange:(NSRange*)arg3 ;
-(NSRange)undoTransaction:(const TSWPStorageTransaction*)arg1 redoTransaction:(TSWPStorageTransaction*)arg2 ;
-(NSRange)textRangeIgnoringTrailingLineBreaksForParagraphAtIndex:(unsigned)arg1 ;
-(BOOL)hasDeletionInRange:(NSRange)arg1 ;
-(BOOL)highlightsAllowed;
-(void)transferAttributeArraySource:(TSWPAttributeArray*)arg1 toAttributeArrayDest:(TSWPAttributeArray*)arg2 atCharIndex:(unsigned)arg3 dolcContext:(id)arg4 undoTransaction:(TSWPStorageTransaction*)arg5 ;
-(id)stringEquivalentFromRange:(NSRange)arg1 withLayoutParent:(id)arg2 ;
-(id)plainTextStringFromRange:(NSRange)arg1 convertTextualAttachments:(BOOL)arg2 includeChildTextStorages:(BOOL)arg3 forExport:(BOOL)arg4 withLayoutParent:(id)arg5 ;
-(id)stringEquivalentFromRange:(NSRange)arg1 ;
-(TSWPChangeAttributeArray*)insertionChangesTable;
-(TSWPRangeVector*)deletedRangeVectorInRange:(NSRange)arg1 ;
-(BOOL)p_hasDeletedTextAtCharIndex:(unsigned)arg1 requireHidden:(BOOL)arg2 range:(NSRange*)arg3 ;
-(unsigned)p_indexOfFirstNonDeletedCharInRange:(NSRange)arg1 requireVisible:(BOOL)arg2 ;
-(NSRange)rangeForChange:(id)arg1 ;
-(void)applyChange:(id)arg1 changeRange:(NSRange)arg2 accept:(BOOL)arg3 undoTransaction:(TSWPStorageTransaction*)arg4 ;
-(id)changeAtCharIndex:(unsigned)arg1 outRange:(NSRange*)arg2 ;
-(NSRange)rangeForTrackedChanges:(id)arg1 ;
-(id)firstHighlightForSelectionRange:(NSRange)arg1 outRange:(NSRange*)arg2 requireComment:(BOOL)arg3 ;
-(BOOL)selectionContainsVisibleTrackedChanges:(id)arg1 ;
-(id)changeDetailsAtCharIndex:(unsigned)arg1 outRange:(NSRange*)arg2 ;
-(id)firstHighlightForSelectionRange:(NSRange)arg1 outRange:(NSRange*)arg2 ;
-(BOOL)p_shouldInsertionSplitChange:(id)arg1 changeSession:(id)arg2 ;
-(id)visibleRangesInRange:(NSRange)arg1 ;
-(BOOL)hasHiddenTextAtCharIndex:(unsigned)arg1 range:(NSRange*)arg2 ;
-(BOOL)hasDeletedTextAtCharIndex:(unsigned)arg1 range:(NSRange*)arg2 ;
-(BOOL)hasVisibleTextAtCharIndex:(unsigned)arg1 ;
-(unsigned)indexOfFirstVisibleCharInRange:(NSRange)arg1 ;
-(unsigned)indexOfFirstNonDeletedCharInRange:(NSRange)arg1 ;
-(void)applyChanges:(BOOL)arg1 inRange:(NSRange)arg2 inSelectionRange:(NSRange)arg3 outChangedRange:(NSRange*)arg4 outSelectionRange:(NSRange*)arg5 undoTransaction:(TSWPStorageTransaction*)arg6 forceAll:(BOOL)arg7 ;
-(id)nextChangeFromCharIndex:(unsigned)arg1 afterChange:(id)arg2 changeRange:(NSRange*)arg3 ;
-(id)previousChangeFromCharIndex:(unsigned)arg1 beforeChange:(id)arg2 changeRange:(NSRange*)arg3 ;
-(void)changeViewSettingsDidChange;
-(id)editableAnnotationForInsertionPointSelection:(id)arg1 includeComments:(BOOL)arg2 withOutRange:(NSRange*)arg3 selectionIsOnEdge:(BOOL*)arg4 ;
-(void)p_handleChangeSplittingForInsertedRange:(NSRange)arg1 changeSession:(id)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(TPSectionEnumerator)sectionEnumeratorAtCharIndex:(unsigned)arg1 ;
-(TPSectionEnumerator)sectionEnumeratorForCharRange:(NSRange)arg1 ;
-(TPSectionEnumerator)sectionEnumeratorAtSectionIndex:(unsigned)arg1 ;
-(id)firstPageNumberAttachment;
-(id)firstPageCountAttachment;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(unsigned)length;
-(id)string;
-(void)removeObserver:(id)arg1 ;
-(id)substringWithRange:(NSRange)arg1 ;
-(unsigned short)characterAtIndex:(unsigned)arg1 ;
-(unsigned)changeCount;
-(NSRange)range;
-(id)stringValue;
-(id).cxx_construct;
-(id)geometry;
-(void)setGeometry:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id)childEnumerator;
-(unsigned)sectionCount;
-(unsigned)paragraphCount;
-(id)documentRoot;
-(void)setDocumentRoot:(id)arg1 ;
-(Class)layoutClass;
-(NSRange)nextWordFromIndex:(unsigned)arg1 forward:(BOOL)arg2 ;
-(id)stylesheet;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(unsigned)wordCount;
@end

