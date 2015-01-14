#pragma once


namespace DB
{

namespace ErrorCodes
{
	enum ErrorCodes
	{
		UNSUPPORTED_METHOD = 1,
		UNSUPPORTED_PARAMETER,
		UNEXPECTED_END_OF_FILE,
		EXPECTED_END_OF_FILE,
		CANNOT_READ_DATA_FROM_READ_BUFFER,
		CANNOT_PARSE_TEXT,
		INCORRECT_NUMBER_OF_COLUMNS,
		THERE_IS_NO_COLUMN,
		SIZES_OF_COLUMNS_DOESNT_MATCH,
		NOT_FOUND_COLUMN_IN_BLOCK,
		POSITION_OUT_OF_BOUND,
		PARAMETER_OUT_OF_BOUND,
		SIZES_OF_COLUMNS_IN_TUPLE_DOESNT_MATCH,
		EMPTY_TUPLE,
		DUPLICATE_COLUMN,
		NO_SUCH_COLUMN_IN_TABLE,
		DELIMITER_IN_STRING_LITERAL_DOESNT_MATCH,
		CANNOT_INSERT_ELEMENT_INTO_CONSTANT_COLUMN,
		SIZE_OF_ARRAY_DOESNT_MATCH_SIZE_OF_FIXEDARRAY_COLUMN,
		NUMBER_OF_COLUMNS_DOESNT_MATCH,
		CANNOT_READ_ALL_DATA_FROM_TAB_SEPARATED_INPUT,
		CANNOT_PARSE_ALL_VALUE_FROM_TAB_SEPARATED_INPUT,
		CANNOT_READ_FROM_ISTREAM,
		CANNOT_WRITE_TO_OSTREAM,
		CANNOT_PARSE_ESCAPE_SEQUENCE,
		CANNOT_PARSE_QUOTED_STRING,
		CANNOT_PARSE_INPUT_ASSERTION_FAILED,
		CANNOT_PRINT_FLOAT_OR_DOUBLE_NUMBER,
		CANNOT_PRINT_INTEGER,
		CANNOT_READ_SIZE_OF_COMPRESSED_CHUNK,
		CANNOT_READ_COMPRESSED_CHUNK,
		ATTEMPT_TO_READ_AFTER_EOF,
		CANNOT_READ_ALL_DATA,
		TOO_MUCH_ARGUMENTS_FOR_FUNCTION,
		TOO_LESS_ARGUMENTS_FOR_FUNCTION,
		BAD_ARGUMENTS,
		UNKNOWN_ELEMENT_IN_AST,
		CANNOT_PARSE_DATE,
		TOO_LARGE_SIZE_COMPRESSED,
		CHECKSUM_DOESNT_MATCH,
		CANNOT_PARSE_DATETIME,
		NUMBER_OF_ARGUMENTS_DOESNT_MATCH,
		ILLEGAL_TYPE_OF_ARGUMENT,
		ILLEGAL_COLUMN,
		ILLEGAL_NUMBER_OF_RESULT_COLUMNS,
		UNKNOWN_FUNCTION,
		UNKNOWN_IDENTIFIER,
		NOT_IMPLEMENTED,
		LOGICAL_ERROR,
		UNKNOWN_TYPE,
		EMPTY_LIST_OF_COLUMNS_QUERIED,
		COLUMN_QUERIED_MORE_THAN_ONCE,
		TYPE_MISMATCH,
		STORAGE_DOESNT_ALLOW_PARAMETERS,
		STORAGE_REQUIRES_PARAMETER,
		UNKNOWN_STORAGE,
		TABLE_ALREADY_EXISTS,
		TABLE_METADATA_ALREADY_EXISTS,
		ILLEGAL_TYPE_OF_COLUMN_FOR_FILTER,
		UNKNOWN_TABLE,
		ONLY_FILTER_COLUMN_IN_BLOCK,
		SYNTAX_ERROR,
		UNKNOWN_AGGREGATE_FUNCTION,
		CANNOT_READ_AGGREGATE_FUNCTION_FROM_TEXT,
		CANNOT_WRITE_AGGREGATE_FUNCTION_AS_TEXT,
		NOT_A_COLUMN,
		ILLEGAL_KEY_OF_AGGREGATION,
		CANNOT_GET_SIZE_OF_FIELD,
		ARGUMENT_OUT_OF_BOUND,
		CANNOT_CONVERT_TYPE,
		CANNOT_WRITE_AFTER_END_OF_BUFFER,
		CANNOT_PARSE_NUMBER,
		UNKNOWN_FORMAT,
		CANNOT_READ_FROM_FILE_DESCRIPTOR,
		CANNOT_WRITE_TO_FILE_DESCRIPTOR,
		CANNOT_OPEN_FILE,
		CANNOT_CLOSE_FILE,
		UNKNOWN_TYPE_OF_QUERY,
		INCORRECT_FILE_NAME,
		INCORRECT_QUERY,
		UNKNOWN_DATABASE,
		DATABASE_ALREADY_EXISTS,
		DIRECTORY_DOESNT_EXIST,
		DIRECTORY_ALREADY_EXISTS,
		FORMAT_IS_NOT_SUITABLE_FOR_INPUT,
		RECEIVED_ERROR_FROM_REMOTE_IO_SERVER,
		CANNOT_SEEK_THROUGH_FILE,
		CANNOT_TRUNCATE_FILE,
		UNKNOWN_COMPRESSION_METHOD,
		EMPTY_LIST_OF_COLUMNS_PASSED,
		SIZES_OF_MARKS_FILES_ARE_INCONSISTENT,
		EMPTY_DATA_PASSED,
		UNKNOWN_AGGREGATED_DATA_VARIANT,
		CANNOT_MERGE_DIFFERENT_AGGREGATED_DATA_VARIANTS,
		CANNOT_READ_FROM_SOCKET,
		CANNOT_WRITE_TO_SOCKET,
		CANNOT_READ_ALL_DATA_FROM_CHUNKED_INPUT,
		CANNOT_WRITE_TO_EMPTY_BLOCK_OUTPUT_STREAM,
		UNKNOWN_PACKET_FROM_CLIENT,
		UNKNOWN_PACKET_FROM_SERVER,
		UNEXPECTED_PACKET_FROM_CLIENT,
		UNEXPECTED_PACKET_FROM_SERVER,
		RECEIVED_DATA_FOR_WRONG_QUERY_ID,
		TOO_SMALL_BUFFER_SIZE,
		CANNOT_READ_HISTORY,
		CANNOT_APPEND_HISTORY,
		FILE_DOESNT_EXIST,
		NO_DATA_TO_INSERT,
		CANNOT_BLOCK_SIGNAL,
		CANNOT_UNBLOCK_SIGNAL,
		CANNOT_MANIPULATE_SIGSET,
		CANNOT_WAIT_FOR_SIGNAL,
		THERE_IS_NO_SESSION,
		CANNOT_CLOCK_GETTIME,
		UNKNOWN_SETTING,
		THERE_IS_NO_DEFAULT_VALUE,
		INCORRECT_DATA,
		TABLE_METADATA_DOESNT_EXIST,
		ENGINE_REQUIRED,
		CANNOT_INSERT_VALUE_OF_DIFFERENT_SIZE_INTO_TUPLE,
		UNKNOWN_SET_DATA_VARIANT,
		INCOMPATIBLE_COLUMNS,
		UNKNOWN_TYPE_OF_AST_NODE,
		INCORRECT_ELEMENT_OF_SET,
		INCORRECT_RESULT_OF_SCALAR_SUBQUERY,
		CANNOT_GET_RETURN_TYPE,
		ILLEGAL_INDEX,
		TOO_LARGE_ARRAY_SIZE,
		FUNCTION_IS_SPECIAL,
		CANNOT_READ_ARRAY_FROM_TEXT,
		TOO_LARGE_STRING_SIZE,
		CANNOT_CREATE_TABLE_FROM_METADATA,
		AGGREGATE_FUNCTION_DOESNT_ALLOW_PARAMETERS,
		PARAMETERS_TO_AGGREGATE_FUNCTIONS_MUST_BE_LITERALS,
		ZERO_ARRAY_OR_TUPLE_INDEX,
		ALL_CONNECTION_TRIES_FAILED,
		UNKNOWN_ELEMENT_IN_CONFIG,
		EXCESSIVE_ELEMENT_IN_CONFIG,
		NO_ELEMENTS_IN_CONFIG,
		ALL_REQUESTED_COLUMNS_ARE_MISSING,
		SAMPLING_NOT_SUPPORTED,
		NOT_FOUND_NODE,
		FOUND_MORE_THAN_ONE_NODE,
		FIRST_DATE_IS_BIGGER_THAN_LAST_DATE,
		UNKNOWN_OVERFLOW_MODE,
		QUERY_SECTION_DOESNT_MAKE_SENSE,
		NOT_FOUND_FUNCTION_ELEMENT_FOR_AGGREGATE,
		NOT_FOUND_RELATION_ELEMENT_FOR_CONDITION,
		NOT_FOUND_RHS_ELEMENT_FOR_CONDITION,
		NO_ATTRIBUTES_LISTED,
		INDEX_OF_COLUMN_IN_SORT_CLAUSE_IS_OUT_OF_RANGE,
		UNKNOWN_DIRECTION_OF_SORTING,
		ILLEGAL_DIVISION,
		AGGREGATE_FUNCTION_NOT_APPLICABLE,
		UNKNOWN_RELATION,
		DICTIONARIES_WAS_NOT_LOADED,
		ILLEGAL_OVERFLOW_MODE,
		TOO_MUCH_ROWS,
		TIMEOUT_EXCEEDED,
		TOO_SLOW,
		TOO_MUCH_COLUMNS,
		TOO_DEEP_SUBQUERIES,
		TOO_DEEP_PIPELINE,
		READONLY,
		TOO_MUCH_TEMPORARY_COLUMNS,
		TOO_MUCH_TEMPORARY_NON_CONST_COLUMNS,
		TOO_DEEP_AST,
		TOO_BIG_AST,
		BAD_TYPE_OF_FIELD,
		BAD_GET,
		BLOCKS_HAS_DIFFERENT_STRUCTURE,
		CANNOT_CREATE_DIRECTORY,
		CANNOT_ALLOCATE_MEMORY,
		CYCLIC_ALIASES,
		NEGATIVE_REFCOUNT,
		CHUNK_NOT_FOUND,
		DUPLICATE_CHUNK_NAME,
		MULTIPLE_ALIASES_FOR_EXPRESSION,
		MULTIPLE_EXPRESSIONS_FOR_ALIAS,
		THERE_IS_NO_PROFILE,
		ILLEGAL_FINAL,
		ILLEGAL_PREWHERE,
		UNEXPECTED_EXPRESSION,
		ILLEGAL_AGGREGATION,
		UNSUPPORTED_MYISAM_BLOCK_TYPE,
		UNSUPPORTED_COLLATION_LOCALE,
		COLLATION_COMPARISON_FAILED,
		UNKNOWN_ACTION,
		TABLE_MUST_NOT_BE_CREATED_MANUALLY,
		SIZES_OF_ARRAYS_DOESNT_MATCH,
		SET_SIZE_LIMIT_EXCEEDED,
		UNKNOWN_USER,
		WRONG_PASSWORD,
		REQUIRED_PASSWORD,
		IP_ADDRESS_NOT_ALLOWED,
		UNKNOWN_ADDRESS_PATTERN_TYPE,
		SERVER_REVISION_IS_TOO_OLD,
		DNS_ERROR,
		UNKNOWN_QUOTA,
		QUOTA_DOESNT_ALLOW_KEYS,
		QUOTA_EXPIRED,
		TOO_MUCH_SIMULTANEOUS_QUERIES,
		NO_FREE_CONNECTION,
		CANNOT_FSYNC,
		NESTED_TYPE_TOO_DEEP,
		ALIAS_REQUIRED,
		AMBIGUOUS_IDENTIFIER,
		EMPTY_NESTED_TABLE,
		SOCKET_TIMEOUT,
		NETWORK_ERROR,
		EMPTY_QUERY,
		UNKNOWN_LOAD_BALANCING,
		UNKNOWN_TOTALS_MODE,
		CANNOT_STATVFS,
		NOT_AN_AGGREGATE,
		QUERY_WITH_SAME_ID_IS_ALREADY_RUNNING,
		CLIENT_HAS_CONNECTED_TO_WRONG_PORT,
		TABLE_IS_DROPPED,
		DATABASE_NOT_EMPTY,
		DUPLICATE_INTERSERVER_IO_ENDPOINT,
		NO_SUCH_INTERSERVER_IO_ENDPOINT,
		ADDING_REPLICA_TO_NON_EMPTY_TABLE,
		UNEXPECTED_AST_STRUCTURE,
		REPLICA_IS_ALREADY_ACTIVE,
		NO_ZOOKEEPER,
		NO_FILE_IN_DATA_PART,
		UNEXPECTED_FILE_IN_DATA_PART,
		BAD_SIZE_OF_FILE_IN_DATA_PART,
		QUERY_IS_TOO_LARGE,
		NOT_FOUND_EXPECTED_DATA_PART,
		TOO_MANY_UNEXPECTED_DATA_PARTS,
		NO_SUCH_DATA_PART,
		BAD_DATA_PART_NAME,
		NO_REPLICA_HAS_PART,
		DUPLICATE_DATA_PART,
		ABORTED,
		NO_REPLICA_NAME_GIVEN,
		FORMAT_VERSION_TOO_OLD,
		CANNOT_MUNMAP,
		CANNOT_MREMAP,
		MEMORY_LIMIT_EXCEEDED,
		TABLE_IS_READ_ONLY,
		NOT_ENOUGH_SPACE,
		UNEXPECTED_ZOOKEEPER_ERROR,
		INVALID_NESTED_NAME,
		CORRUPTED_DATA,
		INCORRECT_MARK,
		INVALID_PARTITION_NAME,
		NOT_LEADER,
		NOT_ENOUGH_BLOCK_NUMBERS,
		NO_SUCH_REPLICA,
		TOO_MUCH_PARTS,
		REPLICA_IS_ALREADY_EXIST,
		NO_ACTIVE_REPLICAS,
		TOO_MUCH_RETRIES_TO_FETCH_PARTS,
		PARTITION_ALREADY_EXISTS,
		PARTITION_DOESNT_EXIST,
		UNION_ALL_RESULT_STRUCTURES_MISMATCH,
		UNION_ALL_COLUMN_ALIAS_MISMATCH,
		CLIENT_OUTPUT_FORMAT_SPECIFIED,
		UNKNOWN_BLOCK_INFO_FIELD,
		BAD_COLLATION,
		CANNOT_COMPILE_CODE,
		NO_AVAILABLE_REPLICA,
		UNEXPECTED_REPLICA,

		POCO_EXCEPTION = 1000,
		STD_EXCEPTION,
		UNKNOWN_EXCEPTION,
	};
}

}
