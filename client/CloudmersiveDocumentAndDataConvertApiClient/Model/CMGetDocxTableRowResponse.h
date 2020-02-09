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


#import "CMDocxTableRow.h"
@protocol CMDocxTableRow;
@class CMDocxTableRow;



@protocol CMGetDocxTableRowResponse
@end

@interface CMGetDocxTableRowResponse : CMObject

/* True if successful, false otherwise [optional]
 */
@property(nonatomic) NSNumber* successful;
/* Contents of the table row that was requested [optional]
 */
@property(nonatomic) CMDocxTableRow* rowResult;

@end