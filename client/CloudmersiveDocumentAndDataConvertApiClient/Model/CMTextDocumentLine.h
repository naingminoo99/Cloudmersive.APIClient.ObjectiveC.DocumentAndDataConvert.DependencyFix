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





@protocol CMTextDocumentLine
@end

@interface CMTextDocumentLine : CMObject

/* The 1-based line index of the line [optional]
 */
@property(nonatomic) NSNumber* lineNumber;
/* The text contents of a single line of a text file [optional]
 */
@property(nonatomic) NSString* lineContents;

@end
