#import <Foundation/Foundation.h>
#import "CMObject.h"

/**
* convertapi
* Convert API lets you effortlessly convert file formats and types.
*
* OpenAPI spec version: v1
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/





@protocol CMTextDocumentElement
@end

@interface CMTextDocumentElement : CMObject

/* The 1-based line index of the element [optional]
 */
@property(nonatomic) NSNumber* elementNumber;
/* The text contents of a single element of a text file [optional]
 */
@property(nonatomic) NSString* elementContents;

@end