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





@protocol CMXmlQueryWithXQueryResult
@end

@interface CMXmlQueryWithXQueryResult : CMObject

/* True if the operation was successful, false otherwise [optional]
 */
@property(nonatomic) NSNumber* successful;
/* Resulting XML result output [optional]
 */
@property(nonatomic) NSString* resultingXml;
/* If an error occurs, additional details on the error [optional]
 */
@property(nonatomic) NSString* errorMessage;

@end
