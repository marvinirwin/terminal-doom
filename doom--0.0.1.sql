-- complain if script is sourced in psql, rather than via CREATE EXTENSION
\echo Use "CREATE EXTENSION doom" to load this file. \quit
CREATE FUNCTION doom() RETURNS text
AS '$libdir/doom'
LANGUAGE C IMMUTABLE STRICT;

