//
//  BookInformation.h
//  skyepub
//
//  Created by 하늘나무 on 13. 6. 25..
//  Copyright (c) 2013년 SkyTree. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Book;
@class Rights;

@interface BookInformation : NSObject {
    /** the code of book */
    int bookCode;
    /** the filename of epub */
    NSString *fileName;
    /** the title of epub */
	NSString *title;
	/** the creator of epub */
    NSString *creator;
	/** the publisher of epub */
    NSString *publisher;
	/** the subject of epub */
    NSString *subject;
	/** the source of epub */
    NSString *source;
	/** the rights of epub */
    Rights *rights;
    NSString* right;
    /** the identifier of epub */
	NSString *identifier;
	/** the language of epub */
    NSString *language;
	/** the date of epub */
    NSString *date;
	/** the type of epub */
    NSString *type;
    /** the last reading position */
    double position;
    /** whether book is fixed layout or not. */
    BOOL isFixedLayout;
    /** whether book is downloaded or not */
    BOOL isDownloaded;
    /** the size of epub file */
    int fileSize;
    /** in grid view, the order index that user set */
    int customOrder;
    /** the url of epub where the epub was downloaded */
	NSString* url;
    /** the url of cover image where the epub was downloaded */
	NSString* coverUrl;
    /** the size of donwloaded */
	int downSize;
    /** whether user read or not */
	BOOL isRead;
    /** whether the epub is Right To Left */
	BOOL isRTL;
    /** whether the epub is Vertical writing */
	BOOL isVerticalWriting;
    /** whether the epub is paginated as gloabl */
	BOOL isGlobalPagination;
    /** the date string when the epub last was read */
	NSString* lastRead;
    /** whether the NavMap is paresed */
	BOOL parseNavMap;
    /** Spread type to be displayed */
    int spread;
    /** reserved */
	int port2;
    
    id contentProviderClass;
    id contentProvider;
    Book *book;
    
    
    /** reserverd for application */
    int resInt0,resInt1,resInt2,resInt3,resInt4,resInt5,resInt6,resInt7,resInt8,resInt9;
    NSString* resStr0,*resStr1,*resStr2,*resStr3,*resStr4,*resStr5,*resStr6,*resStr7,*resStr8,*resStr9;
    double resDouble1,resDouble2,resDouble3,resDouble4,resDouble5,resDouble6,resDouble7,resDouble8,resDouble9;
    BOOL resBool0,resBool1,resBool2,resBool3,resBool4,resBool5,resBool6,resBool7,resBool8,resBool9;
}

@property (nonatomic,copy) NSString *fileName,*title,*creator,*publisher,*subject,*source,*right,*identifier,*language,*date,*type;
@property (nonatomic,retain) Rights* rights;
@property BOOL isFixedLayout;
@property int bookCode;
@property double position;
@property int customOrder,downSize,port2,fileSize;
@property (nonatomic,copy) NSString* url,*coverUrl,*lastRead;
@property BOOL isRead,isRTL,isVerticalWriting,isGlobalPagination,parseNavMap,isDownloaded;
@property int spread;
@property (nonatomic,retain) id contentProviderClass;
@property (nonatomic,retain) id contentProvider;
@property (nonatomic,retain) Book* book;

@property (nonatomic,copy) NSString *resStr0,*resStr1,*resStr2,*resStr3,*resStr4,*resStr5,*resStr6,*resStr7,*resStr8,*resStr9;
@property double resDouble1,resDouble2,resDouble3,resDouble4,resDouble5,resDouble6,resDouble7,resDouble8,resDouble9;
@property int resInt0,resInt1,resInt2,resInt3,resInt4,resInt5,resInt6,resInt7,resInt8,resInt9;
@property BOOL resBool0,resBool1,resBool2,resBool3,resBool4,resBool5,resBool6,resBool7,resBool8,resBool9;

-(id)initWithBookName:(NSString*)bookName baseDirectory:(NSString*)baseDirectory contentProviderClass:(Class)contentProvider;
-(id)initWithBookName:(NSString*)name baseDirectory:(NSString*)directory contentProvider:(id)provider;
-(id)initWithBookName:(NSString*)name baseDirectory:(NSString*)directory;
-(void)makeInformation;

@end
